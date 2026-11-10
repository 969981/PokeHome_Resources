/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0056DBB4
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0066dbb4; name: FUN_.text__0066dbb4
 */


undefined8 FUN__text__0066dbb4(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  int iVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  size_t sVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (*(long *)(param_1 + 0xf48) == 0) { // [自动静态注释] 条件判断/分支
    if (*(long *)(param_1 + 0xf28) != 0) { // [自动静态注释] 条件判断/分支
      if ((*(byte *)(param_1 + 0xf68) & 1) != 0) goto LAB__text__0066dbe8; // [自动静态注释] 条件判断/分支
      goto LAB__text__0066dbfc; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
LAB__text__0066dc18: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    FUN__text__0066713c(param_1,0x70d57b); // [自动静态注释] 调用尚未恢复正式名称的函数
    uVar2 = 3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    if ((*(byte *)(param_1 + 0xf68) & 1) != 0) { // [自动静态注释] 条件判断/分支
LAB__text__0066dbe8: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      FUN__text__006783e4(); // [自动静态注释] 调用尚未恢复正式名称的函数
      *(undefined8 *)(param_1 + 0xf48) = 0;
      *(byte *)(param_1 + 0xf68) = *(byte *)(param_1 + 0xf68) & 0xfe;
LAB__text__0066dbfc: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      if ((*(long *)(param_1 + 0xf28) != 0) && // [自动静态注释] 条件判断/分支
         (iVar1 = FUN__text__0066e580(*(long *)(param_1 + 0xf28),0,param_1 + 0xd48,0), iVar1 != 0)) // [自动静态注释] 调用尚未恢复正式名称的函数
      goto LAB__text__0066dc18; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
    *(undefined8 *)(param_1 + 0xf48) = *(undefined8 *)(param_1 + 0xd48);
    uVar2 = FUN__text__00677d50(param_1,*(undefined8 *)(param_1 + 0xbf8)); // [自动静态注释] 调用尚未恢复正式名称的函数
    if ((int)uVar2 == 0) { // [自动静态注释] 条件判断/分支
      *(undefined8 *)(param_1 + 0x6d0) = 0;
      *(undefined4 *)(param_1 + 0x14e0) = 0;
      *(undefined8 *)(param_1 + 0x1248) = *(undefined8 *)(param_1 + 0x6b0);
      *(ushort *)(param_1 + 0x15a4) =
           (ushort)((ulong)*(undefined8 *)(param_1 + 0xf40) >> 0x24) & 0x80 | // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
           *(ushort *)(param_1 + 0x15a4) & 0xff55;
      *(undefined8 *)(param_1 + 0x1268) = *(undefined8 *)(param_1 + 0x6b8);
      FUN__text__006783e4(*(undefined8 *)(param_1 + 0x1640)); // [自动静态注释] 调用尚未恢复正式名称的函数
      iVar1 = *(int *)(param_1 + 0xa38); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined8 *)(param_1 + 0x1640) = 0;
      if ((iVar1 == 1) || (iVar1 == 6)) { // [自动静态注释] 条件判断/分支
        *(undefined8 *)(param_1 + 0x1518) = 0;
      } // [自动静态注释] 作用域/控制流边界
      else if (iVar1 == 5) { // [自动静态注释] 条件判断/分支
        *(undefined8 *)(param_1 + 0x1518) = *(undefined8 *)(param_1 + 0x7d8);
      } // [自动静态注释] 作用域/控制流边界
      else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        *(long *)(param_1 + 0x1518) = *(long *)(param_1 + 0x6f8);
        if ((*(char **)(param_1 + 0x6e8) != (char *)0x0) && (*(long *)(param_1 + 0x6f8) == -1)) { // [自动静态注释] 条件判断/分支
          sVar3 = strlen(*(char **)(param_1 + 0x6e8)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          *(size_t *)(param_1 + 0x1518) = sVar3;
        } // [自动静态注释] 作用域/控制流边界
      } // [自动静态注释] 作用域/控制流边界
      if (*(long *)(param_1 + 0xf58) != 0) { // [自动静态注释] 条件判断/分支
        FUN__text__006519f0(param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
      } // [自动静态注释] 作用域/控制流边界
      if ((*(long *)(param_1 + 0xf60) == 0) || // [自动静态注释] 条件判断/分支
         (uVar2 = FUN__text__00654cac(param_1), (int)uVar2 == 0)) { // [自动静态注释] 调用尚未恢复正式名称的函数
        *(ushort *)(param_1 + 0x15a4) = *(ushort *)(param_1 + 0x15a4) | 0x10;
        FUN__text__006535fc(param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
        FUN__text__00666378(param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
        FUN__text__006664d0(param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
        *(ulong *)(param_1 + 0x1250) = *(ulong *)(param_1 + 0x1250) & *(ulong *)(param_1 + 0x1248);
        *(ulong *)(param_1 + 0x1270) = *(ulong *)(param_1 + 0x1270) & *(ulong *)(param_1 + 0x1268);
        if ((*(char *)(param_1 + 0x15a4) < '\0') && // [自动静态注释] 条件判断/分支
           ((*(int *)(param_1 + 0x15a8) == 0 && // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
            (iVar1 = FUN__text__00678280(param_1 + 0x15a8), iVar1 != 0)))) { // [自动静态注释] 调用尚未恢复正式名称的函数
          uVar2 = 0x1b; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        } // [自动静态注释] 作用域/控制流边界
        else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          uVar2 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        } // [自动静态注释] 作用域/控制流边界
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  return uVar2; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


