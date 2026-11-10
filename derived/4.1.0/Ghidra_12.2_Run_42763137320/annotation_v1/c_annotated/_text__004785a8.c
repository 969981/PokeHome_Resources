/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_003785A8
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004785a8; name: FUN_.text__004785a8
 */


int FUN__text__004785a8(long param_1,long *param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  int iVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int *piVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if ((1 < (*(ushort *)(param_1 + 0x19c) & 7) - 1) || // [自动静态注释] 条件判断/分支
     (piVar5 = *(int **)(param_1 + 0x1c8), piVar5 == (int *)0x0)) { // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    return 1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  iVar6 = *piVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (((param_2 != (long *)0x0) && (*param_2 != 0)) && ((int)param_2[1] == iVar6)) { // [自动静态注释] 条件判断/分支
    *(long *)(param_1 + 0x150) = *param_2;
    *(int *)(param_1 + 0x158) = (int)param_2[1];
  } // [自动静态注释] 作用域/控制流边界
  iVar1 = 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (((*(long *)(piVar5 + 10) != 0) && ((piVar5[0xc] & 0x7fffffffU) != 0)) && // [自动静态注释] 条件判断/分支
     ((*(long *)(param_1 + 0x150) == 0 || ((*(byte *)(piVar5 + 4) >> 2 & 1) != 0)))) { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    lVar2 = FUN__text__0047bad4(DAT_00ae9a68); // [自动静态注释] 调用尚未恢复正式名称的函数
    *(long *)(param_1 + 0x150) = lVar2;
    if (lVar2 != 0) { // [自动静态注释] 条件判断/分支
      uVar4 = *(undefined8 *)(param_1 + 0x1c8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar3 = FUN__text__0046ab20(*(undefined8 *)(param_1 + 0x1d0)); // [自动静态注释] 调用尚未恢复正式名称的函数
      iVar1 = FUN__text__0047b4a4(uVar4,lVar2,uVar3); // [自动静态注释] 调用尚未恢复正式名称的函数
      if (iVar1 != 1) { // [自动静态注释] 条件判断/分支
        FUN__text__0047bb70(DAT_00ae9a68,*(undefined8 *)(param_1 + 0x150)); // [自动静态注释] 调用尚未恢复正式名称的函数
        iVar6 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *(undefined8 *)(param_1 + 0x150) = 0;
      } // [自动静态注释] 作用域/控制流边界
      *(int *)(param_1 + 0x158) = iVar6;
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  if (((*(ushort *)(param_1 + 0x19c) >> 8 & 1) != 0) && // [自动静态注释] 条件判断/分支
     (lVar2 = *(long *)(param_1 + 0x150), lVar2 != 0)) { // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar4 = FUN__text__0044a594(*(undefined8 *)(param_1 + 8)); // [自动静态注释] 调用尚未恢复正式名称的函数
    FUN__text__0047d160(lVar2,uVar4); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  return iVar1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


