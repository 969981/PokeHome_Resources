/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00346D98
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00446d98; name: FUN_.text__00446d98
 */


void FUN__text__00446d98(undefined8 *param_1,long param_2,undefined8 *param_3,undefined8 *param_4, // [自动静态注释] 调用尚未恢复正式名称的函数
                        undefined4 param_5) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义

{ // [自动静态注释] 作用域/控制流边界
  int iVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int *piVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  param_1[1] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[2] = param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[3] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *param_1 = 0x888758;
  *(undefined4 *)((long)param_1 + 0x2c) = *(undefined4 *)((long)param_4 + 0x14);
  param_1[4] = param_4[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_4 + 2);
  piVar2 = (int *)*param_4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (piVar2 != (int *)0x0) { // [自动静态注释] 条件判断/分支
    *piVar2 = *piVar2 + 1;
    param_2 = param_1[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  param_1[3] = piVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar3 = *param_3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined4 *)(param_1 + 7) = param_5;
  param_1[8] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined1 *)(param_1 + 9) = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  param_1[6] = uVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined4 *)((long)param_1 + 0x4c) = 1;
  if (param_2 != 0) { // [自动静态注释] 条件判断/分支
    iVar1 = *(int *)(param_2 + 0x60); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(int *)(param_2 + 0x60) = iVar1 + 1;
    if ((iVar1 == 1) && (*(char *)(param_2 + 100) != '\0')) { // [自动静态注释] 条件判断/分支
      FUN__text__004473d0(param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
      return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


