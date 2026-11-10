/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00328F28
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00428f28; name: FUN_.text__00428f28
 */


void FUN__text__00428f28(long param_1,long *param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined4 uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (*(long *)(param_1 + 0xf0) == 0) { // [自动静态注释] 条件判断/分支
    *param_2 = 0;
    *(undefined8 *)((long)param_2 + 0xc) = 0x2b;
    *(undefined8 *)((long)param_2 + 0x14) = 0;
    *(undefined8 *)((long)param_2 + 0x24) = 0x1ffffffff;
    *(undefined8 *)((long)param_2 + 0x1c) = 0x3f800000ffffffff;
    *(undefined4 *)((long)param_2 + 0x2c) = 2;
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  if ((ulong)*(ushort *)(param_2 + 2) == 0) { // [自动静态注释] 条件判断/分支
    *(undefined4 *)((long)param_2 + 0x2c) = 0x11;
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  uVar1 = *(undefined4 *)(param_1 + 0x44); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar2 = *(long *)(param_1 + 0xf8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (lVar2 == 0) { // [自动静态注释] 条件判断/分支
    lVar2 = FUN__text__00400f90(5,(ulong)*(ushort *)(param_2 + 2) * // [自动静态注释] 调用尚未恢复正式名称的函数
                                  (ulong)(*(ushort *)(param_1 + 0x48) >> 6),0x10); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    *(long *)(param_1 + 0xf8) = lVar2;
    if (lVar2 == 0) { // [自动静态注释] 条件判断/分支
      *(undefined4 *)((long)param_2 + 0x2c) = 2;
      return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  *param_2 = lVar2;
  *(undefined2 *)((long)param_2 + 0x12) = 0;
  *(undefined4 *)(param_2 + 1) = uVar1;
  *(undefined4 *)((long)param_2 + 0xc) = 0x2b;
  (**(code **)(**(long **)(param_1 + 0xf0) + 0x68))(*(long **)(param_1 + 0xf0),param_2); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  *(undefined4 *)((long)param_2 + 0x2c) = *(undefined4 *)((long)param_2 + 0xc);
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


