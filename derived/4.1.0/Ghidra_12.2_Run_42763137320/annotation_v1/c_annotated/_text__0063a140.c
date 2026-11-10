/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：PKM_LCG_Decrypt
 * 用途/行为：使用 EC 和 LCG 高16位 XOR 解密游戏 PKM
 * 证据等级：VERIFIED_NATIVE_STATIC；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0063a140; name: FUN_.text__0063a140
 */


void FUN__text__0063a140(long param_1,uint param_2,int param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  ushort *puVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (1 < param_2) { // [自动静态注释] 条件判断/分支
    param_2 = param_2 >> 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar3 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (param_2 != 1) { // [自动静态注释] 条件判断/分支
      do { // [自动静态注释] 循环/迭代
        iVar2 = param_3 * 0x41c64e6d + 0x6073; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        puVar1 = (ushort *)(param_1 + uVar3 * 2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uVar3 = uVar3 + 2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        param_3 = iVar2 * 0x41c64e6d + 0x6073; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *puVar1 = *puVar1 ^ (ushort)((uint)iVar2 >> 0x10);
        puVar1[1] = puVar1[1] ^ (ushort)((uint)param_3 >> 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } while (((ulong)param_2 & 0x7ffffffe) != uVar3); // [自动静态注释] 循环/迭代
    } // [自动静态注释] 作用域/控制流边界
    if ((param_2 & 1) != 0) { // [自动静态注释] 条件判断/分支
      *(ushort *)(param_1 + uVar3 * 2) =
           *(ushort *)(param_1 + uVar3 * 2) ^
           (ushort)((uint)(param_3 * 0x41c64e6d + 0x6073) >> 0x10); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


