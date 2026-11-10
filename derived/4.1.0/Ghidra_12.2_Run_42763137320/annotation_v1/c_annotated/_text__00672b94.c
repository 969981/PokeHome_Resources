/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00572B94
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00672b94; name: FUN_.text__00672b94
 */


undefined8 FUN__text__00672b94(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ushort uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar1 = *(long *)(param_1 + 0x800); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(long *)(param_1 + 0x14f8) = lVar1;
  if ((lVar1 == 0) && (*(long *)(param_1 + 0xd38) == 0)) { // [自动静态注释] 条件判断/分支
    uVar2 = *(ushort *)(param_1 + 0x15a4) & 0xfdff; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    if ((*(ushort *)(param_1 + 0x15a4) >> 10 & 1) != 0) { // [自动静态注释] 条件判断/分支
      FUN__text__006783e4(*(undefined8 *)(param_1 + 0x14f0)); // [自动静态注释] 调用尚未恢复正式名称的函数
      lVar1 = *(long *)(param_1 + 0x14f8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    if (lVar1 == 0) { // [自动静态注释] 条件判断/分支
      lVar1 = FUN__text__00678404(*(undefined8 *)(param_1 + 0xd38)); // [自动静态注释] 调用尚未恢复正式名称的函数
    } // [自动静态注释] 作用域/控制流边界
    else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      lVar1 = FUN__text__00659a28(0x718ef6); // [自动静态注释] 调用尚未恢复正式名称的函数
    } // [自动静态注释] 作用域/控制流边界
    *(long *)(param_1 + 0x14f0) = lVar1;
    uVar2 = *(ushort *)(param_1 + 0x15a4) & 0xf800 | // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            *(ushort *)(param_1 + 0x15a4) & 0x3ff | (ushort)(lVar1 != 0) << 10;
    *(ushort *)(param_1 + 0x15a4) = uVar2;
    if (lVar1 == 0) { // [自动静态注释] 条件判断/分支
      return 0x1b; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
    uVar2 = uVar2 | 0x200; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  *(ushort *)(param_1 + 0x15a4) = uVar2;
  return 0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


