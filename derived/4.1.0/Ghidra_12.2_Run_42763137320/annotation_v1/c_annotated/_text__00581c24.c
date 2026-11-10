/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00481C24
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00581c24; name: FUN_.text__00581c24
 */


void FUN__text__00581c24(long param_1,undefined8 *param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  ushort uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  short sVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar5 = *(long *)(param_1 + 0x28); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((*(byte *)(lVar5 + 0x18) & 1) == 0) { // [自动静态注释] 条件判断/分支
    if ((*(byte *)(lVar5 + 0x18) >> 2 & 1) == 0) goto LAB__text__00581c44; // [自动静态注释] 条件判断/分支
LAB__text__00581c84: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    fVar6 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 0x10)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(uint *)(param_1 + 8) = (int)(*(float *)(lVar5 + 0x10) * fVar6) + 3U & 0xfffffffc;
    *(undefined1 *)(lVar5 + 0x18) = 0;
    uVar1 = *(ushort *)(param_2 + 2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(ushort *)((long)param_2 + 0x12) = uVar1;
    sVar2 = *(short *)(param_1 + 0x14); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    *(float *)(param_1 + 0x1c) = (*(float *)(lVar5 + 8) * 6.2831855) / *(float *)(param_1 + 0x20);
    if ((*(byte *)(lVar5 + 0x18) >> 2 & 1) != 0) goto LAB__text__00581c84; // [自动静态注释] 条件判断/分支
LAB__text__00581c44: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    *(undefined1 *)(lVar5 + 0x18) = 0;
    uVar1 = *(ushort *)(param_2 + 2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(ushort *)((long)param_2 + 0x12) = uVar1;
    sVar2 = *(short *)(param_1 + 0x14); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  if (sVar2 == 0) { // [自动静态注释] 条件判断/分支
LAB__text__00581cd0: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    *(uint *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + (uint)uVar1;
    *(undefined4 *)((long)param_2 + 0xc) = 0x2d;
    sVar2 = *(short *)((long)param_2 + 0x12); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    uVar3 = *(int *)(param_1 + 8) * (int)sVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar4 = uVar3 - *(uint *)(param_1 + 0xc); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (uVar3 < *(uint *)(param_1 + 0xc) || uVar4 == 0) { // [自动静态注释] 条件判断/分支
      uVar4 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    else if (uVar1 < uVar4) goto LAB__text__00581cd0; // [自动静态注释] 条件判断/分支
    *(short *)((long)param_2 + 0x12) = (short)uVar4;
    *(uint *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + (uVar4 & 0xffff);
    *(undefined4 *)((long)param_2 + 0xc) = 0x11;
    sVar2 = *(short *)((long)param_2 + 0x12); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  if (sVar2 != 0) { // [自动静态注释] 条件判断/分支
    FUN__text__00582060(*(undefined4 *)(param_1 + 0x24), // [自动静态注释] 调用尚未恢复正式名称的函数
                        *(undefined4 *)(*(long *)(param_1 + 0x28) + 0xc),param_1 + 0x18,*param_2);
    *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(*(long *)(param_1 + 0x28) + 0xc);
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


