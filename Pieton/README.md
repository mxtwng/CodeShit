Instructions, infos, knowledge from Python!

1. Monday, July 27th 2026 (night):
        a. normal
            python3 main.py

        b. single script that needs lib (weather.py needs requests lib without creating a heavy project folder or permanent .venv; uv temporarily fetches requests, runs script, done)
            uv run --with requests weather.py
            OR  # uv run --with <package_name> script.py # 

        c. multi-file project/app
            cd ~/<projectName>
            uv init
            uv add <lib/packageName>
            uv run main.py

        Local python server:
            standard: python3 -m http.server 8000
            uv: uv run python -m http.server 8000
        
        Sending data to cloud server/database (this needs 3rd party libs)
            Standalone script: uv run --with firebase-admin send_to_firebase.py
            Full web + Firebase project folder: 
                cd ~/<projectDashboard>
                uv init
                uv add firebase-admin
                uv run app.py (the app.py file that sends data to database)
        
        if some lib/package cant use newer python version:
        standalone script: uv run --python 3.9 script.py
        project: uv init --python 3.9 

        Remove unused/stale packages and older downloaded Python versions
            uv cache prune
        Perform a complete purge to free up every byte of temporary space
            uv cache clean
        Clean up a project folder
            rm -rf .venv (when inside the project folder)
        
2. 