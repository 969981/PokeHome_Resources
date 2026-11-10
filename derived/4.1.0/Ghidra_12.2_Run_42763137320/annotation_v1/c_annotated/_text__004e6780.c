/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_003E6780
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004e6780; name: FUN_.text__004e6780
 */


undefined8 FUN__text__004e6780(long param_1,ushort *param_2,uint param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  byte bVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  bVar1 = *(byte *)(param_1 + 0x6c); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar4 = bVar1 & 0xfc; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(char *)(param_1 + 0x6c) = (char)uVar4;
  if ((param_2 != (ushort *)0x0) && (param_3 != 0)) { // [自动静态注释] 条件判断/分支
    uVar4 = uVar4 | 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(ushort **)(param_1 + 8) = param_2;
    *(uint *)(param_1 + 0x10) = param_3;
    *(char *)(param_1 + 0x6c) = (char)uVar4;
    *(undefined8 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 0x1c) = 0;
    uVar2 = (uint)(*param_2 >> 8) | (*param_2 & 0xff00ff) << 8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(uint *)(param_1 + 0x1c) = uVar2;
    if (uVar2 != 0) { // [自动静态注释] 条件判断/分支
      fVar5 = *(float *)(param_2 + 1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined1 *)(param_1 + 0x20) = 0;
      *(undefined1 *)(param_1 + 0x4a) = 0;
      *(undefined4 *)(param_1 + 0x40) = 0;
      *(float *)(param_1 + 0x50) = fVar5;
      fVar5 = fVar5 * (float)uVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(ushort **)(param_1 + 0x28) = param_2 + 3;
      *(float *)(param_1 + 0x58) = fVar5 * 1.6666667e-05;
      *(ulong *)(param_1 + 0x30) = (long)param_2 + (ulong)param_3;
      *(undefined8 *)(param_1 + 0x38) = 0;
      uVar4 = bVar1 | 3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(char *)(param_1 + 0x6c) = (char)uVar4;
      *(float *)(param_1 + 0x54) = 60000.0 / fVar5;
    } // [自动静态注释] 作用域/控制流边界
    if ((uVar4 >> 1 & 1) != 0) { // [自动静态注释] 条件判断/分支
      uVar3 = FUN__text__004e6884(param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
      uVar4 = 2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if ((uVar3 & 1) == 0) { // [自动静态注释] 条件判断/分支
        uVar4 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      uVar4 = *(byte *)(param_1 + 0x6c) & 0xfffffffd | uVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(char *)(param_1 + 0x6c) = (char)uVar4;
    } // [自动静态注释] 作用域/控制流边界
    if ((uVar4 >> 1 & 1) != 0) { // [自动静态注释] 条件判断/分支
      return 1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
  } // [自动静态注释] 作用域/控制流边界
  return 2; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


