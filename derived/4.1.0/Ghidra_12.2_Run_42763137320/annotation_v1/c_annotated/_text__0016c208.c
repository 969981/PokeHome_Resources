/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0006C208
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0016c208; name: FUN_.text__0016c208
 */


undefined8 FUN__text__0016c208(long param_1,long param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar1 = FUN__text__00321ac0(); // [自动静态注释] 调用尚未恢复正式名称的函数
  if ((*(char *)(lVar1 + 0x934d4) != '\0') && // [自动静态注释] 条件判断/分支
     (uVar2 = FUN__text__0010fca4(param_2), (uVar2 & 1) != 0)) { // [自动静态注释] 调用尚未恢复正式名称的函数
    lVar1 = *(long *)(param_2 + 0x60); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (lVar1 != 0) { // [自动静态注释] 条件判断/分支
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
    *(undefined1 *)(lVar1 + 99) = 1;
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))((long *)(lVar1 + 0x48)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  lVar1 = *(long *)(DAT_008e1d98 + 0x50); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (lVar1 != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    uVar2 = FUN__text__0064db70(lVar1); // [自动静态注释] 调用尚未恢复正式名称的函数
    if ((uVar2 & 1) == 0) goto LAB__text__0016ca78; // [自动静态注释] 条件判断/分支
  } // [自动静态注释] 作用域/控制流边界
  if (*(uint *)(param_1 + 0x68) < 0x2f) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Could not emulate address calculation at 0x0016c2c0 */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (*(code *)(&UNK__text__0016c2cc + // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                      (ulong)*(ushort *)((ulong)*(uint *)(param_1 + 0x68) * 2 + 0x725638) * 4))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    return uVar3; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  if (lVar1 == 0) { // [自动静态注释] 条件判断/分支
    return 0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
LAB__text__0016ca78: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))((long *)(lVar1 + 0x48)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  return 0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


