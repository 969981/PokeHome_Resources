/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00029C90
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00129c90; name: FUN_.text__00129c90
 */


void FUN__text__00129c90(long *param_1,long param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long *plVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar2 = *param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *param_1 = param_2;
  if (lVar2 == 0) { // [自动静态注释] 条件判断/分支
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  plVar3 = *(long **)(lVar2 + 0x18); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (plVar3 != (long *)0x0) { // [自动静态注释] 条件判断/分支
    plVar1 = plVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (*(long **)(lVar2 + 0x20) != plVar3) { // [自动静态注释] 条件判断/分支
      plVar1 = *(long **)(lVar2 + 0x20); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      do { // [自动静态注释] 循环/迭代
        plVar4 = plVar1 + -1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if (*plVar4 != 0) { // [自动静态注释] 条件判断/分支
          (**(code **)(*(long *)(*plVar4 + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          plVar1[-1] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        } // [自动静态注释] 作用域/控制流边界
        plVar1 = plVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } while (plVar4 != plVar3); // [自动静态注释] 循环/迭代
      plVar1 = *(long **)(lVar2 + 0x18); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    *(long **)(lVar2 + 0x20) = plVar3;
    (**(code **)(**(long **)(lVar2 + 0x30) + 0x18)) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
              (*(long **)(lVar2 + 0x30),plVar1,*(long *)(lVar2 + 0x28) - (long)plVar1,8); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  if (*(long *)(lVar2 + 0x10) != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)(*(long *)(lVar2 + 0x10) + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    *(undefined8 *)(lVar2 + 0x10) = 0;
  } // [自动静态注释] 作用域/控制流边界
  if (*(long *)(lVar2 + 8) != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)(*(long *)(lVar2 + 8) + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    *(undefined8 *)(lVar2 + 8) = 0;
  } // [自动静态注释] 作用域/控制流边界
                    /* WARNING: Could not recover jumptable at 0x00129d84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[1] + 0x18))((long *)param_1[1],lVar2,param_1[2],param_1[3]); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


