/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_004015CC
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005015cc; name: FUN_.text__005015cc
 */


undefined4 FUN__text__005015cc(long param_1,undefined8 *param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  int iVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  char local_2c [4]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 auStack_28 [4]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 auStack_24 [4]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  uVar2 = (**(code **)*param_2)(param_2,auStack_28,4,auStack_24); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (((((uVar2 & 1) != 0) && // [自动静态注释] 条件判断/分支
       (uVar2 = (**(code **)*param_2)(param_2,param_1 + 0x28,4,auStack_24), (uVar2 & 1) != 0)) && // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      (uVar2 = (**(code **)*param_2)(param_2,param_1 + 0x2c,4,auStack_24), (uVar2 & 1) != 0)) && // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
     ((uVar2 = (**(code **)*param_2)(param_2,local_2c,1,auStack_24), (uVar2 & 1) != 0 && // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      (uVar2 = (**(code **)*param_2)(param_2,param_1 + 0x32,2,auStack_24), (uVar2 & 1) != 0)))) { // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(bool *)(param_1 + 0x30) = local_2c[0] != '\0';
    iVar1 = FUN__text__005016f0(param_1,param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
    if (iVar1 == 1) { // [自动静态注释] 条件判断/分支
      iVar1 = FUN__text__00501a40(param_1,param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
      uVar3 = 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (iVar1 != 1) { // [自动静态注释] 条件判断/分支
        uVar3 = 2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      return uVar3; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  return 2; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


