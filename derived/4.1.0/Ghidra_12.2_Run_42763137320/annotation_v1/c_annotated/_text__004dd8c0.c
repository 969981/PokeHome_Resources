/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_003DD8C0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004dd8c0; name: FUN_.text__004dd8c0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN__text__004dd8c0(long param_1,int *param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  uint uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int local_40 [3]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uStack_34; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  iVar2 = *(int *)(param_1 + 0x28); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar1 = *param_2 + iVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  iVar4 = *(ushort *)(param_1 + 0x54) - 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(uint *)(param_1 + 0x28) = uVar1;
  if (iVar4 == 0) { // [自动静态注释] 条件判断/分支
    if (*(uint *)(param_1 + 0x24) <= uVar1) { // [自动静态注释] 条件判断/分支
      uVar6 = 0x11; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *param_2 = *(uint *)(param_1 + 0x24) - iVar2;
      goto LAB__text__004dd93c; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  else if (*(uint *)(param_1 + 0x38) < uVar1) { // [自动静态注释] 条件判断/分支
    if (*(ushort *)(param_1 + 0x54) != 0) { // [自动静态注释] 条件判断/分支
      *(short *)(param_1 + 0x54) = (short)iVar4;
    } // [自动静态注释] 作用域/控制流边界
    *param_2 = (*(uint *)(param_1 + 0x38) - iVar2) + 1;
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_1 + 0x34);
  } // [自动静态注释] 作用域/控制流边界
  uVar6 = 0x2d; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
LAB__text__004dd93c: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uVar3 = *(undefined4 *)(param_1 + 0x24); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__004af510(param_1 + 0x40,*(undefined8 *)(param_1 + 0x18),iVar2,*param_2 + iVar2); // [自动静态注释] 调用尚未恢复正式名称的函数
  lVar5 = *(long *)(param_1 + 0x18); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((*(byte *)(lVar5 + 10) >> 4 & 1) != 0) { // [自动静态注释] 条件判断/分支
    uStack_34 = *(undefined4 *)(lVar5 + 0x2b0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_40[1] = 0x3f800000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_40[0] = iVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_40[2] = uVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    FUN__text__0048e990(*_DAT_008a4638,*(undefined4 *)(lVar5 + 0x280),local_40,param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  return uVar6; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


