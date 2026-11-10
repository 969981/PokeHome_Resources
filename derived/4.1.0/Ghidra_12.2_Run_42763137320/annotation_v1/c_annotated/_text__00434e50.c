/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00334E50
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00434e50; name: FUN_.text__00434e50
 */


undefined8 FUN__text__00434e50(undefined4 param_1,long param_2,ulong param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  uint uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_14; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  uVar5 = param_3 >> 0x20 & 0xff; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar4 = (long *)(param_2 + uVar5 * 0x18); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar1 = *(uint *)(plVar4 + 1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (uVar1 == 0) { // [自动静态注释] 条件判断/分支
LAB__text__00434e9c: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    plVar4 = (long *)FUN__text__00434fac(param_2,param_3 & 0xffffff0000000000 | // [自动静态注释] 调用尚未恢复正式名称的函数
                                                 param_3 & 0xffffffff | uVar5 << 0x20); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    if (plVar4 == (long *)0x0) { // [自动静态注释] 条件判断/分支
      return 0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    uVar2 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar3 = (uint)param_3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (uVar1 != 0) { // [自动静态注释] 条件判断/分支
      uVar2 = uVar3 / uVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    plVar4 = (long *)(*plVar4 + (ulong)(uVar3 - uVar2 * uVar1) * 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    do { // [自动静态注释] 循环/迭代
      plVar4 = (long *)*plVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (plVar4 == (long *)0x0) goto LAB__text__00434e9c; // [自动静态注释] 条件判断/分支
    } while (*(uint *)(plVar4 + 1) != uVar3); // [自动静态注释] 循环/迭代
  } // [自动静态注释] 作用域/控制流边界
  local_14 = param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__00436f70(plVar4,&local_14); // [自动静态注释] 调用尚未恢复正式名称的函数
  return 1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


