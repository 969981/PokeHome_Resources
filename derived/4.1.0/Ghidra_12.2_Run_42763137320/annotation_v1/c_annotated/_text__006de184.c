/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_005DE184
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006de184; name: FUN_.text__006de184
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN__text__006de184(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  int iVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if ((*(char *)(*(long *)(*(long *)(param_1 + 0x10) + 0xa0) + 0x752) != '\0') || // [自动静态注释] 条件判断/分支
     (lVar4 = FUN__text__006de6d0(*_DAT_008a6c20), lVar4 == 0)) { // [自动静态注释] 调用尚未恢复正式名称的函数
    return 0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  *(undefined8 *)(lVar4 + 0x88) = 0;
  *(undefined4 *)(lVar4 + 0x74) = 0;
  *(long *)(param_1 + 8) = lVar4;
  lVar5 = *(long *)(*(long *)(param_1 + 0x10) + 0x418); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  iVar1 = *(int *)(lVar5 + 0x28); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  iVar2 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (iVar1 != 0) { // [自动静态注释] 条件判断/分支
    iVar2 = *(int *)(lVar5 + 0x2c) / iVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  *(int *)(lVar4 + 0x7c) = *(int *)(lVar5 + 0x2c) - iVar2 * iVar1;
  iVar1 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(int *)(lVar5 + 0x2c) + 1 < *(int *)(lVar5 + 0x28)) { // [自动静态注释] 条件判断/分支
    iVar1 = *(int *)(lVar5 + 0x2c) + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  *(int *)(lVar5 + 0x2c) = iVar1;
  puVar3 = (undefined8 *) // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
           (*(long *)(*(long *)(param_1 + 0x10) + 0x1f0) + (long)*(int *)(param_1 + 0x20) * 0x10); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uVar6 = *puVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined8 *)(lVar4 + 0x28) = puVar3[1];
  *(undefined8 *)(lVar4 + 0x20) = uVar6;
  return 1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


