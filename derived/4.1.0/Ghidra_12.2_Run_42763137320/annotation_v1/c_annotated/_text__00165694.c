/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00065694
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00165694; name: FUN_.text__00165694
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00165694(long param_1,uint param_2,undefined8 param_3,undefined4 param_4, // [自动静态注释] 调用尚未恢复正式名称的函数
                        uint param_5,uint param_6) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义

{ // [自动静态注释] 作用域/控制流边界
  undefined4 uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  uVar1 = FUN__text__0016ae08(*_DAT_0089f560); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__00156ff8(*(undefined8 *)(param_1 + 0x198),param_3,param_4,uVar1); // [自动静态注释] 调用尚未恢复正式名称的函数
  uVar2 = FUN__text__00157128(*(undefined8 *)(param_1 + 0x198)); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (param_2 < *(uint *)(param_1 + 0x1a0)) { // [自动静态注释] 条件判断/分支
    *(ulong *)(*(long *)(param_1 + 0x1a8) + (ulong)param_2 * 0x18 + 8) =
         (ulong)(param_5 & 3) | ((ulong)param_6 & 7) << 0x12; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    FUN__text__005f3280(*(undefined8 *)(*(long *)(param_1 + 0x1a8) + (ulong)param_2 * 0x18),uVar2); // [自动静态注释] 调用尚未恢复正式名称的函数
    *(undefined2 *)(*(long *)(param_1 + 0x1a8) + (ulong)param_2 * 0x18 + 0x10) = 0;
    lVar3 = *(long *)(param_1 + 0x1a8) + (ulong)param_2 * 0x18; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(ushort *)(lVar3 + 0x12) = *(ushort *)(lVar3 + 0x12) & 0xfffe;
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


