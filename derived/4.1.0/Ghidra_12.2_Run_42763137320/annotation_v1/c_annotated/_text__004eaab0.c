/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_003EAAB0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004eaab0; name: FUN_.text__004eaab0
 */


void FUN__text__004eaab0(long param_1,long *param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined4 uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  char cVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if ((undefined8 *)*param_2 != (undefined8 *)0x0) { // [自动静态注释] 条件判断/分支
    puVar4 = (undefined8 *)*param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    do { // [自动静态注释] 循环/迭代
      if (*(int *)(puVar4 + 3) == 1) { // [自动静态注释] 条件判断/分支
        FUN__text__004e93c0(puVar4[4]); // [自动静态注释] 调用尚未恢复正式名称的函数
      } // [自动静态注释] 作用域/控制流边界
      else if (*(int *)(puVar4 + 3) == 0) { // [自动静态注释] 条件判断/分支
        lVar6 = puVar4[4]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uVar1 = *(undefined4 *)(lVar6 + 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        cVar2 = *(char *)(lVar6 + 0x2c); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        plVar3 = *(long **)(lVar6 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if (plVar3 != (long *)0x0) { // [自动静态注释] 条件判断/分支
          (**(code **)(*plVar3 + 0xe0)) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                    (plVar3,*(long *)(param_1 + 8) - *(long *)(*(long *)(param_1 + 0x10) + 0x68)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        } // [自动静态注释] 作用域/控制流边界
        plVar3 = (long *)(param_1 + 0x40); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        do { // [自动静态注释] 循环/迭代
          plVar3 = (long *)*plVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        } while (plVar3 != (long *)0x0 && plVar3 != (long *)lVar6); // [自动静态注释] 循环/迭代
        if (plVar3 != (long *)0x0) { // [自动静态注释] 条件判断/分支
          *(undefined4 *)(plVar3 + 2) = 0;
        } // [自动静态注释] 作用域/控制流边界
        if (cVar2 != '\0') { // [自动静态注释] 条件判断/分支
          FUN__text__004eabb0(param_1,uVar1,1); // [自动静态注释] 调用尚未恢复正式名称的函数
        } // [自动静态注释] 作用域/控制流边界
      } // [自动静态注释] 作用域/控制流边界
      puVar5 = (undefined8 *)puVar4[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      plVar3 = param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if ((undefined8 *)*param_2 != puVar4) { // [自动静态注释] 条件判断/分支
        plVar3 = (long *)&DAT_00000010; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      *plVar3 = (long)puVar5;
      (**(code **)*puVar4)(puVar4); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      FUN__text__00400fc0(0,puVar4); // [自动静态注释] 调用尚未恢复正式名称的函数
      puVar4 = puVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (puVar5 != (undefined8 *)0x0); // [自动静态注释] 循环/迭代
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


