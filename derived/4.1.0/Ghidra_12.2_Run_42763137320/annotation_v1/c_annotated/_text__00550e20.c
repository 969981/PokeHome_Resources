/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00450E20
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00550e20; name: FUN_.text__00550e20
 */


void FUN__text__00550e20(undefined8 param_1,undefined8 param_2,undefined8 param_3,long *param_4) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined8 uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 *puVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 *puVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  uVar2 = *(uint *)(param_4 + 5); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar6 = (undefined8 *)*param_4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar8 = (undefined4 *)param_4[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar7 = (undefined4 *)param_4[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar9 = (undefined8 *)param_4[3]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar1 = param_3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((uVar2 & 1) != 0) { // [自动静态注释] 条件判断/分支
    uVar1 = param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  uVar3 = *(uint *)((long)param_4 + 0x2c) >> ((int)param_4[6] == 1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  (*(code *)*puVar9)(uVar3,*puVar8,*puVar7,param_1,*puVar6,uVar1); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  if (1 < uVar2) { // [自动静态注释] 条件判断/分支
    lVar5 = (ulong)uVar2 - 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if ((uVar2 & 1) != 0) { // [自动静态注释] 条件判断/分支
      param_2 = param_3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    do { // [自动静态注释] 循环/迭代
      uVar4 = uVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar9 = puVar9 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar8 = puVar8 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar7 = puVar7 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar6 = puVar6 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      (*(code *)*puVar9)(uVar3,*puVar8,*puVar7,uVar4,*puVar6,param_2); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      lVar5 = lVar5 + -1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar1 = param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      param_2 = uVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (lVar5 != 0); // [自动静态注释] 循环/迭代
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


