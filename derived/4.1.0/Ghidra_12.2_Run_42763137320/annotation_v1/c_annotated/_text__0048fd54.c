/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0038FD54
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0048fd54; name: FUN_.text__0048fd54
 */


void FUN__text__0048fd54(long param_1,long *param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  byte bVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 uStack_11; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  bVar1 = (**(code **)(*param_2 + 0x30))(param_2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((bVar1 & 1) != 0) { // [自动静态注释] 条件判断/分支
    *(int *)(param_1 + 0xa8) = *(int *)(param_1 + 0xa8) + 1;
  } // [自动静态注释] 作用域/控制流边界
  *(byte *)((long)param_2 + 0x1c) = bVar1 & 1;
  bVar1 = (**(code **)(*param_2 + 0x38))(param_2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((bVar1 & 1) == 0) { // [自动静态注释] 条件判断/分支
    *(byte *)((long)param_2 + 0x1d) = bVar1 & 1;
    bVar1 = (**(code **)(*param_2 + 0x40))(param_2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    *(int *)(param_1 + 0xac) = *(int *)(param_1 + 0xac) + 1;
    *(byte *)((long)param_2 + 0x1d) = bVar1 & 1;
    bVar1 = (**(code **)(*param_2 + 0x40))(param_2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  if ((bVar1 & 1) == 0) { // [自动静态注释] 条件判断/分支
    *(byte *)((long)param_2 + 0x1e) = bVar1 & 1;
    iVar2 = FUN__text__0048f840(param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    *(int *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) + 1;
    *(byte *)((long)param_2 + 0x1e) = bVar1 & 1;
    iVar2 = FUN__text__0048f840(param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  if (iVar2 == 0) { // [自动静态注释] 条件判断/分支
    lVar3 = *(long *)(param_1 + 0xa0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    lVar3 = FUN__text__00491720(param_1 + 0x20,iVar2,&uStack_11); // [自动静态注释] 调用尚未恢复正式名称的函数
    if (lVar3 != 0) { // [自动静态注释] 条件判断/分支
      *(int *)(lVar3 + 4) = *(int *)(lVar3 + 4) + 1;
      *(undefined1 *)(lVar3 + 8) = 1;
    } // [自动静态注释] 作用域/控制流边界
    *(int *)(param_2 + 3) = iVar2;
    lVar3 = *(long *)(param_1 + 0xa0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  if (lVar3 == 0) { // [自动静态注释] 条件判断/分支
    *(long **)(param_1 + 0xa0) = param_2;
    param_2[2] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    param_2[2] = lVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(long **)(param_1 + 0xa0) = param_2;
  } // [自动静态注释] 作用域/控制流边界
  *(undefined1 *)(param_1 + 0xc4) = 1;
  *(undefined2 *)(param_1 + 199) = 0x101;
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


