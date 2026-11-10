/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0046EB90
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0056eb90; name: FUN_.text__0056eb90
 */


undefined8 // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
FUN__text__0056eb90(long param_1,undefined8 param_2,undefined8 param_3,long param_4, // [自动静态注释] 调用尚未恢复正式名称的函数
                   undefined4 *param_5) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义

{ // [自动静态注释] 作用域/控制流边界
  undefined4 uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  byte bVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  bVar2 = *(byte *)(param_5 + 1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar4 = (uint)bVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(uint *)(param_1 + 0x70) = (uint)bVar2;
  uVar1 = *param_5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(long *)(param_1 + 0x68) = param_4;
  *(undefined4 *)(param_1 + 0x74) = uVar1;
  if ((*(char *)((long)param_5 + 5) < '\0') && (*(char *)(param_4 + 0x48) == '\0')) { // [自动静态注释] 条件判断/分支
    uVar4 = bVar2 - 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(uint *)(param_1 + 0x70) = uVar4;
    if (uVar4 == 0) goto LAB__text__0056ec44; // [自动静态注释] 条件判断/分支
  } // [自动静态注释] 作用域/控制流边界
  else if (bVar2 == 0) goto LAB__text__0056ec44; // [自动静态注释] 条件判断/分支
  iVar3 = FUN__text__0055d3a4(param_1 + 8,param_2,uVar4,0); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (((iVar3 != 1) || // [自动静态注释] 条件判断/分支
      (iVar3 = FUN__text__0055d3a4(param_1 + 0x28,param_2,*(undefined4 *)(param_1 + 0x70),0), // [自动静态注释] 调用尚未恢复正式名称的函数
      iVar3 != 1)) || // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
     (iVar3 = FUN__text__0055d3a4(param_1 + 0x48,param_2,*(undefined4 *)(param_1 + 0x70),0), // [自动静态注释] 调用尚未恢复正式名称的函数
     iVar3 != 1)) { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    return 0x34; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  param_4 = *(long *)(param_1 + 0x68); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
LAB__text__0056ec44: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  *(undefined1 *)(param_4 + 0x4c) = 1;
  *(undefined1 *)(*(long *)(param_1 + 0x68) + 0x4d) = 1;
  *(undefined1 *)(*(long *)(param_1 + 0x68) + 0x4e) = 1;
  fVar5 = exp2f(*(float *)(*(long *)(param_1 + 0x68) + 0x44) * 0.1660964); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(float *)(param_1 + 0x80) = fVar5;
  return 1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


