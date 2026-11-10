/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_005C3530
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006c3530; name: FUN_.text__006c3530
 */


void FUN__text__006c3530(long param_1,long param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  short sVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  short sVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  short sVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  short sVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ushort uVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  sVar5 = *(short *)(param_2 + 0x54); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(short *)(param_1 + 0xd2) = sVar5;
  sVar1 = *(short *)(param_2 + 0x56); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(short *)(param_1 + 0xd4) = sVar1;
  sVar2 = *(short *)(param_2 + 0x58); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(short *)(param_1 + 0xd6) = sVar2;
  sVar3 = *(short *)(param_2 + 0x5a); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(short *)(param_1 + 0xd8) = sVar3;
  if (((sVar5 != 0 || sVar1 != 0) || sVar2 != 0) || sVar3 != 0) { // [自动静态注释] 条件判断/分支
    *(byte *)(param_1 + 0x10a) = *(byte *)(param_1 + 0x10a) | 8;
  } // [自动静态注释] 作用域/控制流边界
  if (*(char *)(param_1 + 0x108) == '\x02') { // [自动静态注释] 条件判断/分支
    sVar5 = (short)(int)*(float *)(param_1 + 0x50) - *(short *)(param_2 + 0x5e); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    if (*(char *)(param_1 + 0x108) != '\x01') { // [自动静态注释] 条件判断/分支
      *(undefined2 *)(param_1 + 0xda) = *(undefined2 *)(param_2 + 0x5c);
      *(undefined2 *)(param_1 + 0xdc) = *(undefined2 *)(param_2 + 0x5e);
      *(undefined2 *)(param_1 + 0xde) = *(undefined2 *)(param_2 + 0x60);
      *(undefined2 *)(param_1 + 0xe0) = *(undefined2 *)(param_2 + 0x62);
      return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
    sVar5 = *(short *)(param_2 + 0x5c); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  *(short *)(param_1 + 0xda) = sVar5;
  *(undefined2 *)(param_1 + 0xdc) = *(undefined2 *)(param_2 + 0x5e);
  *(undefined2 *)(param_1 + 0xde) = *(undefined2 *)(param_2 + 0x60);
  *(undefined2 *)(param_1 + 0xe0) = *(undefined2 *)(param_2 + 0x62);
  uVar6 = *(ushort *)(param_2 + 0x60); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(byte *)(param_1 + 0x58) = *(byte *)(param_1 + 0x58) | 0x10;
  uVar4 = NEON_ucvtf((uint)uVar6); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined4 *)(param_1 + 0x54) = uVar4;
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


