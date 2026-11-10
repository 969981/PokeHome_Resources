/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_003FFC18
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004ffc18; name: FUN_.text__004ffc18
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN__text__004ffc18(long param_1,long *param_2,char *param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  uint uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  short sVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int local_28; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint local_24; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar6 = *param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(uint *)(lVar6 + 0x30) < 2) { // [自动静态注释] 条件判断/分支
    *param_3 = '\0';
    lVar5 = param_2[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (lVar5 == 0) goto LAB__text__004ffc8c; // [自动静态注释] 条件判断/分支
    if ((short)*(ushort *)(lVar5 + 10) + 1 != *(int *)(*param_2 + 0x28)) { // [自动静态注释] 条件判断/分支
      uVar1 = *(ushort *)(lVar5 + 10) + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar4 = (ulong)uVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(short *)(lVar5 + 10) = (short)uVar1;
      goto LAB__text__004ffce0; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
    *(undefined2 *)(lVar5 + 10) = 0;
    if ((*(byte *)((long)param_2 + 10) & 1) == 0) { // [自动静态注释] 条件判断/分支
LAB__text__004ffc8c: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      *param_3 = '\x01';
      return 0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
    if ((*(byte *)((long)param_2 + 10) >> 1 & 1) == 0) { // [自动静态注释] 条件判断/分支
      sVar3 = (short)param_2[1] + -1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(short *)(param_2 + 1) = sVar3;
      if (sVar3 != 0) { // [自动静态注释] 条件判断/分支
        uVar4 = (ulong)*(ushort *)(lVar5 + 10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        goto LAB__text__004ffce0; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      } // [自动静态注释] 作用域/控制流边界
      goto LAB__text__004ffc8c; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  else if (*(uint *)(lVar6 + 0x30) - 2 < 2) { // [自动静态注释] 条件判断/分支
    uVar4 = FUN__text__00500870(param_1,param_2,param_3); // [自动静态注释] 调用尚未恢复正式名称的函数
    goto LAB__text__004ffce0; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  uVar4 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
LAB__text__004ffce0: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  if (*param_3 != '\0') { // [自动静态注释] 条件判断/分支
    return uVar4; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  uVar1 = (uint)uVar4 & 0xffff; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar2 = *(uint *)(lVar6 + 0x28); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_28 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_24 = uVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__0048d5c0(*_DAT_008a45d8,*(undefined4 *)(param_1 + 8),*(undefined4 *)(lVar6 + 0x10), // [自动静态注释] 调用尚未恢复正式名称的函数
                      uVar2,&local_24,&local_28); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  if (uVar2 <= local_24) { // [自动静态注释] 条件判断/分支
    local_24 = uVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  *param_3 = local_28 != 0;
  return (ulong)local_24; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


