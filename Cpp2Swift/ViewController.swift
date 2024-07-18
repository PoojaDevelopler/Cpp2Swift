//
//  ViewController.swift
//  Cpp2Swift
//
//  Created by pnkbksh on 08/07/24.
//

import UIKit

class ViewController: UIViewController {

    override func viewDidLoad() {
        super.viewDidLoad()
        
        print("Result = ",multiplyArrayfromC() , "\n")
        print("Result = ",addTowNumber(), "\n")
        print("Result = ",addTowMultiply(), "\n")
        print("Result = ",addTowSubtract(), "\n")
    }

    func multiplyArrayfromC()->Int32{
        let arrayCalculation = multiplyArray([10,12,30])
        return arrayCalculation
    }

    func addTowNumber() -> Int32{
        return add(10, 20)
    }
    
    func addTowMultiply() -> Int32{
        return multiply(10, 20)
    }
     
    func addTowSubtract() -> Int32{
        return subtract(10, 20)
    }
    
    
}

