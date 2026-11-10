/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00093A7C
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00193a7c; name: FUN_.text__00193a7c
 */


uint FUN__text__00193a7c(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  uint uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar2 = FUN__text__00195358(); // [自动静态注释] 调用尚未恢复正式名称的函数
  if ((lVar2 != 0) && (*(int *)(lVar2 + 0x18) != 0)) { // [自动静态注释] 条件判断/分支
    uVar3 = *(ulong *)(lVar2 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar4 = *(long *)(*(long *)(*(long *)(*(long *)(param_1 + 0x40) + (uVar3 & 0xffffffff) * 0x20 + // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                                         0x10) + 0x10) + 8); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    if (lVar4 != 0) { // [自动静态注释] 条件判断/分支
      uVar6 = *(undefined8 *)(lVar2 + 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      plVar5 = (long *)(lVar4 + 0x48); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      (**(code **)(*plVar5 + 0x10))(plVar5); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      uVar1 = FUN__text__00303128(lVar4,uVar3 >> 0x20,(int)uVar6 + (int)((ulong)uVar6 >> 0x20) * 6); // [自动静态注释] 调用尚未恢复正式名称的函数
      (**(code **)(*plVar5 + 0x18))(plVar5); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      return uVar1 & 1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  return 0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


