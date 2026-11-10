/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_003F132C
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004f132c; name: FUN_.text__004f132c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN__text__004f132c(long param_1,long param_2,int *param_3,uint *param_4) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  uint uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if ((*(byte *)(param_1 + 0x5a) & 0xe) != 0) { // [自动静态注释] 条件判断/分支
    return 0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  lVar6 = *(long *)(param_2 + 0x2a0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar7 = *(undefined8 *)(param_1 + 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((*(ushort *)(lVar6 + 0xc) & 0x7c) == 4) { // [自动静态注释] 条件判断/分支
    iVar4 = *(int *)(lVar6 + 0x24); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    iVar4 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  *param_3 = iVar4;
  if (*(short *)(lVar6 + 0x1a) == 0x11) { // [自动静态注释] 条件判断/分支
    uVar2 = _DAT_008ab03c & 0xffff; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (*(int *)(param_2 + 0x3b8) != 0) { // [自动静态注释] 条件判断/分支
      uVar2 = (_DAT_008ab03c & 0xffff) << 2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    iVar4 = uVar2 + iVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *param_3 = iVar4;
  } // [自动静态注释] 作用域/控制流边界
  uVar2 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((_DAT_008ab03c & 0xffff) != 0) { // [自动静态注释] 条件判断/分支
    uVar2 = (((_DAT_008ab03c & 0xffff) + iVar4) - 1) / (_DAT_008ab03c & 0xffff); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  *param_3 = uVar2 * (_DAT_008ab03c & 0xffff);
  iVar4 = FUN__text__004ed5e8(uVar7); // [自动静态注释] 调用尚未恢复正式名称的函数
  iVar5 = FUN__text__004ed5b0(uVar7); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (*(int *)(param_2 + 0x3b0) + *(int *)(param_2 + 0x3ac) <= *param_3 + (iVar5 - iVar4)) { // [自动静态注释] 条件判断/分支
    return 0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  uVar2 = ((iVar5 - iVar4) - *(int *)(param_2 + 0x3ac)) + *param_3 + *(int *)(param_2 + 0x3b8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar1 = *(uint *)(param_2 + 0x3b4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar3 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (uVar1 != 0) { // [自动静态注释] 条件判断/分支
    uVar3 = uVar2 / uVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  uVar2 = uVar2 - uVar3 * uVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *param_4 = uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU);
  return 1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


