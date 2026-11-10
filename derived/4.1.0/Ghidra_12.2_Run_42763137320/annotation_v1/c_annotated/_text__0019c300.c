/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0009C300
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0019c300; name: FUN_.text__0019c300
 */


bool FUN__text__0019c300(long param_1,long param_2,uint param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  int iVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  bool bVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  uVar4 = -(ulong)(param_3 >> 0x1f) & 0xfffffffc00000000 | (ulong)param_3 << 2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  iVar1 = *(int *)(param_1 + uVar4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  iVar2 = *(int *)(param_2 + uVar4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  bVar3 = iVar1 == iVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (param_3 == 5) { // [自动静态注释] 条件判断/分支
    bVar3 = (((((*(int *)(param_1 + 0x5c) == *(int *)(param_2 + 0x5c) && // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                *(int *)(param_1 + 0x58) == *(int *)(param_2 + 0x58)) &&
               *(int *)(param_1 + 0x54) == *(int *)(param_2 + 0x54)) &&
              *(int *)(param_1 + 0x50) == *(int *)(param_2 + 0x50)) &&
             *(int *)(param_1 + 0x4c) == *(int *)(param_2 + 0x4c)) &&
            *(int *)(param_1 + 0x48) == *(int *)(param_2 + 0x48)) && iVar1 == iVar2;
  } // [自动静态注释] 作用域/控制流边界
  return bVar3; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


