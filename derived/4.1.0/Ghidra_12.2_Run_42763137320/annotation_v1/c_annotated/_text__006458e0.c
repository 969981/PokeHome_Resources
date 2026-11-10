/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：ZA_PA9_Encode
 * 用途/行为：Z-A PA9 原始 PKM 加密入口
 * 证据等级：VERIFIED_NATIVE_STATIC；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006458e0; name: FUN_.text__006458e0
 */


void FUN__text__006458e0(int *param_1,ushort *param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  short sVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  sVar5 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar4 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  do { // [自动静态注释] 循环/迭代
    lVar1 = lVar4 + 8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    sVar5 = *(short *)((long)param_1 + lVar4 + 0xe) + // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            *(short *)((long)param_1 + lVar4 + 0xc) + *(short *)((long)param_1 + lVar4 + 10) +
            *(short *)((long)param_1 + lVar4 + 8) + sVar5;
    lVar4 = lVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } while (lVar1 != 0x140); // [自动静态注释] 循环/迭代
  iVar2 = *param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(short *)((long)param_1 + 6) = sVar5;
  lVar4 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  iVar6 = iVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  do { // [自动静态注释] 循环/迭代
    iVar3 = iVar6 * 0x41c64e6d + 0x6073; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar1 = lVar4 + 4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    iVar6 = iVar3 * 0x41c64e6d + 0x6073; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(ushort *)((long)param_1 + lVar4 + 8) =
         *(ushort *)((long)param_1 + lVar4 + 8) ^ (ushort)((uint)iVar3 >> 0x10);
    *(ushort *)((long)param_1 + lVar4 + 10) =
         *(ushort *)((long)param_1 + lVar4 + 10) ^ (ushort)((uint)iVar6 >> 0x10);
    lVar4 = lVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } while (lVar1 != 0x140); // [自动静态注释] 循环/迭代
  if (param_2 != (ushort *)0x0) { // [自动静态注释] 条件判断/分支
    iVar2 = iVar2 * 0x41c64e6d + 0x6073; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    iVar6 = iVar2 * 0x41c64e6d + 0x6073; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *param_2 = *param_2 ^ (ushort)((uint)iVar2 >> 0x10);
    iVar2 = iVar6 * 0x41c64e6d + 0x6073; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    param_2[1] = param_2[1] ^ (ushort)((uint)iVar6 >> 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    iVar6 = iVar2 * 0x41c64e6d + 0x6073; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    param_2[2] = param_2[2] ^ (ushort)((uint)iVar2 >> 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    iVar2 = iVar6 * 0x41c64e6d + 0x6073; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    param_2[3] = param_2[3] ^ (ushort)((uint)iVar6 >> 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    iVar6 = iVar2 * 0x41c64e6d + 0x6073; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    param_2[4] = param_2[4] ^ (ushort)((uint)iVar2 >> 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    iVar2 = iVar6 * 0x41c64e6d + 0x6073; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    param_2[5] = param_2[5] ^ (ushort)((uint)iVar6 >> 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    param_2[6] = param_2[6] ^ (ushort)((uint)iVar2 >> 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    param_2[7] = param_2[7] ^ (ushort)((uint)(iVar2 * 0x41c64e6d + 0x6073) >> 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


