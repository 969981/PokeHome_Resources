/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_005004E0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006004e0; name: FUN_.text__006004e0
 */


undefined4 FUN__text__006004e0(undefined4 param_1,undefined4 param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar1 = DAT_00c15ca0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (DAT_00c15ca0 == 0) { // [自动静态注释] 条件判断/分支
    return 0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  plVar5 = (long *)(DAT_00c15ca0 + 0x48); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  (**(code **)(*plVar5 + 0x10))(plVar5); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  plVar3 = (long *)(*(code *)**(undefined8 **)(lVar1 + 0x50))(); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar4 = (long *)FUN__text__00600840(); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (plVar4 != plVar3) { // [自动静态注释] 条件判断/分支
    do { // [自动静态注释] 循环/迭代
      plVar3 = (long *)*plVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (plVar3 != plVar4 && plVar3 != (long *)0x0); // [自动静态注释] 循环/迭代
    if (plVar3 == (long *)0x0) { // [自动静态注释] 条件判断/分支
      uVar2 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      goto LAB__text__0060058c; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  uVar2 = FUN__text__00649f10(lVar1,param_1,param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
LAB__text__0060058c: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  (**(code **)(*plVar5 + 0x18))(plVar5); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  return uVar2; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


