/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_004A0590
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005a0590; name: FUN_.text__005a0590
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN__text__005a0590(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  FUN__text__006ec848(param_1,_DAT_008a0448); // [自动静态注释] 调用尚未恢复正式名称的函数
  plVar4 = *(long **)(param_1 + 0x110); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (plVar4 != (long *)0x0) { // [自动静态注释] 条件判断/分支
    plVar2 = plVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (*(long **)(param_1 + 0x118) != plVar4) { // [自动静态注释] 条件判断/分支
      plVar2 = *(long **)(param_1 + 0x118); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      do { // [自动静态注释] 循环/迭代
        plVar6 = plVar2 + -4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        lVar1 = *plVar6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *plVar6 = 0;
        if (lVar1 != 0) { // [自动静态注释] 条件判断/分支
          (**(code **)(*(long *)plVar2[-3] + 0x18))((long *)plVar2[-3],lVar1,plVar2[-2],plVar2[-1]); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        } // [自动静态注释] 作用域/控制流边界
        plVar2 = plVar6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } while (plVar6 != plVar4); // [自动静态注释] 循环/迭代
      plVar2 = *(long **)(param_1 + 0x110); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    *(long **)(param_1 + 0x118) = plVar4;
    (**(code **)(**(long **)(param_1 + 0x128) + 0x18)) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
              (*(long **)(param_1 + 0x128),plVar2,*(long *)(param_1 + 0x120) - (long)plVar2,8); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  lVar1 = *(long *)(param_1 + 0xe0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (lVar1 != 0) { // [自动静态注释] 条件判断/分支
    lVar3 = *(long *)(param_1 + 0xe8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar5 = lVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (lVar3 != lVar1) { // [自动静态注释] 条件判断/分支
      do { // [自动静态注释] 循环/迭代
        lVar5 = lVar3 + -0x20; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        FUN__text__005b509c(lVar5); // [自动静态注释] 调用尚未恢复正式名称的函数
        if (*(long *)(lVar3 + -0x18) != 0) { // [自动静态注释] 条件判断/分支
          (**(code **)(*(long *)(*(long *)(lVar3 + -0x18) + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          *(undefined8 *)(lVar3 + -0x18) = 0;
        } // [自动静态注释] 作用域/控制流边界
        lVar3 = lVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } while (lVar5 != lVar1); // [自动静态注释] 循环/迭代
      lVar5 = *(long *)(param_1 + 0xe0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    *(long *)(param_1 + 0xe8) = lVar1;
    (**(code **)(**(long **)(param_1 + 0xf8) + 0x18)) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
              (*(long **)(param_1 + 0xf8),lVar5,*(long *)(param_1 + 0xf0) - lVar5,8); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  return param_1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


