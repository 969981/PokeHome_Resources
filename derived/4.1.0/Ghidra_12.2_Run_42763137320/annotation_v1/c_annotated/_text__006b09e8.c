/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_005B09E8
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006b09e8; name: FUN_.text__006b09e8
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__006b09e8(long param_1,long param_2,long param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  byte *pbVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_50; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_48; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  puVar4 = _DAT_008a6a20; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar3 = *(uint *)(param_1 + 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((uVar3 >> 9 & 1) == 0) { // [自动静态注释] 条件判断/分支
    FUN__text__006d6610(param_2,param_3,*(undefined8 *)(param_1 + 0x40)); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    pbVar1 = (byte *)(*(long *)(param_1 + 0x18) + // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                     ((ulong)uVar3 & 3) * 0x10 + ((ulong)uVar3 & 0x30) + // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                     ((ulong)(uVar3 >> 2) & 3) * 0x14); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    (*(code *)*_DAT_008a6a20) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
              (*(long *)(param_1 + 0x40) + 8,*(undefined4 *)((ulong)*pbVar1 * 4 + 0x724f30)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    (*DAT_00c60c98)(*(undefined4 *)(pbVar1 + 4),*(undefined8 *)(param_2 + 0xb0)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    FUN__text__006d6610(param_2,param_3,*(undefined8 *)(param_1 + 0x40)); // [自动静态注释] 调用尚未恢复正式名称的函数
    (*(code *)*puVar4)(*(long *)(param_1 + 0x40) + 8,8); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  plVar2 = (long *)(*(long *)(*(long *)(param_3 + 200) + 0x10) + // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                   (long)*(int *)(*(long *)(param_3 + 200) + 0x30) * 0x10); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  local_48 = plVar2[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_50 = *plVar2 + (ulong)*(uint *)(param_1 + 0x30); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(uint **)(param_1 + 0x38) == (uint *)0x0) { // [自动静态注释] 条件判断/分支
    lVar5 = 0x230; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    lVar5 = (ulong)**(uint **)(param_1 + 0x38) + 0x230; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__006ee1d4(param_2,*(undefined4 *) // [自动静态注释] 调用尚未恢复正式名称的函数
                               (*(long *)(*(long *)(param_1 + 0x20) + 0x18) + // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                               (ulong)*(ushort *)(param_1 + 0x4a) * 4),0,&local_50,lVar5); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  lVar5 = *(long *)(param_1 + 0x38); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((lVar5 != 0) && (*(int *)(lVar5 + 0xc) != 0)) { // [自动静态注释] 条件判断/分支
    plVar2 = (long *)(*(long *)(*(long *)(param_3 + 200) + 0x10) + // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                     (long)*(int *)(*(long *)(param_3 + 200) + 0x30) * 0x10); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    local_48 = plVar2[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_50 = *plVar2 + (ulong)*(uint *)(lVar5 + 0xc); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    FUN__text__006ee1d4(param_2,*(undefined4 *) // [自动静态注释] 调用尚未恢复正式名称的函数
                                 (*(long *)(*(long *)(param_1 + 0x20) + 0x20) + // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                                 (ulong)*(ushort *)(param_1 + 0x4a) * 4),3,&local_50, // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                        *(undefined4 *)(lVar5 + 8));
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__006b0c68(param_1,param_2,param_3); // [自动静态注释] 调用尚未恢复正式名称的函数
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


