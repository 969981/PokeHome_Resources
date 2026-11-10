/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_005D2DA8
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006d2da8; name: FUN_.text__006d2da8
 */


void FUN__text__006d2da8(long param_1,long param_2,long param_3,undefined8 param_4,long param_5, // [自动静态注释] 调用尚未恢复正式名称的函数
                        long param_6) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义

{ // [自动静态注释] 作用域/控制流边界
  long *plVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_70; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lStack_68; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  local_70 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lStack_68 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar6 = *(long *)(param_1 + 0xd8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  iVar4 = *(int *)(param_1 + 0xcc); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar2 = *(uint *)(param_3 + 0xd0) & ((int)*(uint *)(param_3 + 0xd0) >> 0x1f ^ 0xffffffffU); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__006ec64c(*(long *)(*(long *)(param_2 + 200) + 8) + // [自动静态注释] 调用尚未恢复正式名称的函数
                      (long)*(int *)(*(long *)(param_2 + 200) + 0x30) * 0x48,&local_70); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  local_70 = local_70 + lVar6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__006ed12c(param_4,0,&local_70,8,(long)iVar4 << 3); // [自动静态注释] 调用尚未恢复正式名称的函数
  lVar6 = *(long *)(param_6 + 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  iVar4 = *(int *)(param_3 + (ulong)uVar2 * 0x18 + 0x5c); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (-1 < iVar4) { // [自动静态注释] 条件判断/分支
    plVar1 = (long *)(*(long *)(*(long *)(param_2 + 200) + 0x10) + // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                     (long)*(int *)(*(long *)(param_2 + 200) + 0x30) * 0x10); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    lStack_68 = plVar1[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_70 = *plVar1 + param_5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    FUN__text__006ee1d4(param_4,iVar4,0,&local_70,0x40); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  iVar4 = *(int *)(param_3 + (ulong)uVar2 * 0x18 + 0x60); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (-1 < iVar4) { // [自动静态注释] 条件判断/分支
    plVar1 = (long *)(*(long *)(*(long *)(param_2 + 200) + 0x10) + // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                     (long)*(int *)(*(long *)(param_2 + 200) + 0x30) * 0x10); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    lStack_68 = plVar1[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_70 = *plVar1 + lVar6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    FUN__text__006ee1d4(param_4,iVar4,4,&local_70,0x10); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__006ecef4(param_4,*(long *)(param_2 + 0xb8) + 0x360); // [自动静态注释] 调用尚未恢复正式名称的函数
  uVar5 = FUN__text__006d5724(*(undefined8 *)(param_2 + 0xb8),1); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__006ece50(param_4,uVar5); // [自动静态注释] 调用尚未恢复正式名称的函数
  lVar6 = *(long *)(param_1 + 0xe0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_70 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lStack_68 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  iVar4 = *(int *)(param_6 + 4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar3 = *(undefined4 *)(param_6 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__006ec64c(*(long *)(*(long *)(param_2 + 200) + 8) + // [自动静态注释] 调用尚未恢复正式名称的函数
                      (long)*(int *)(*(long *)(param_2 + 200) + 0x30) * 0x48,&local_70); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  local_70 = lVar6 + (long)iVar4 * 4 + local_70; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__006eca30(param_4,3,2,&local_70,uVar3,0); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (*(long *)(param_2 + 0x158) != 0) { // [自动静态注释] 条件判断/分支
    FUN__text__006ecef4(param_4); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


