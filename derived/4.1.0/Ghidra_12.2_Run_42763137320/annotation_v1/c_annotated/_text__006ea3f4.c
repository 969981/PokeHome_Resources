/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_005EA3F4
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006ea3f4; name: FUN_.text__006ea3f4
 */


void FUN__text__006ea3f4(int *param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  int iVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int *piVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if ((char)param_1[0xc] != '\0') { // [自动静态注释] 条件判断/分支
    if (*(ulong *)(param_1 + 2) < *(ulong *)(param_1 + (long)*param_1 * 2 + 4)) { // [自动静态注释] 条件判断/分支
      *(ulong *)(param_1 + 2) = *(ulong *)(param_1 + (long)*param_1 * 2 + 4);
    } // [自动静态注释] 作用域/控制流边界
    piVar4 = param_1 + (long)*param_1 * 0x6c + 0xe; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    FUN__text__006ec60c(piVar4,0,*(undefined8 *)(piVar4 + 0x12)); // [自动静态注释] 调用尚未恢复正式名称的函数
    FUN__text__006ec608(piVar4); // [自动静态注释] 调用尚未恢复正式名称的函数
    iVar3 = 2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (param_1[1] == 3) { // [自动静态注释] 条件判断/分支
      iVar3 = 3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    iVar1 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (iVar3 != 0) { // [自动静态注释] 条件判断/分支
      iVar1 = (*param_1 + 1) / iVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    iVar3 = (*param_1 + 1) - iVar1 * iVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    piVar4 = param_1 + (long)iVar3 * 0x6c + 0xe; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *param_1 = iVar3;
    piVar4[0x68] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    piVar4[0x69] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar2 = FUN__text__006ec5f4(piVar4); // [自动静态注释] 调用尚未恢复正式名称的函数
    iVar3 = *param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined8 *)(piVar4 + 0x6a) = uVar2;
    (param_1 + (long)iVar3 * 2 + 4)[0] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    (param_1 + (long)iVar3 * 2 + 4)[1] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


