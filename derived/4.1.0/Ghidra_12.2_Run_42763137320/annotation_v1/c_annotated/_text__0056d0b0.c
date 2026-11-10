/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0046D0B0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0056d0b0; name: FUN_.text__0056d0b0
 */


undefined8 // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
FUN__text__0056d0b0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4, // [自动静态注释] 调用尚未恢复正式名称的函数
                   undefined4 *param_5) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义

{ // [自动静态注释] 作用域/控制流边界
  undefined4 uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  *(undefined8 *)(param_1 + 0x18) = param_3;
  *(undefined8 *)(param_1 + 0x20) = param_2;
  *(undefined8 *)(param_1 + 0x10) = param_4;
  *(undefined4 *)(param_1 + 0x30) = *param_5;
  lVar2 = FUN__text__0056e62c(param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(long *)(param_1 + 0x28) = lVar2;
  if (lVar2 == 0) { // [自动静态注释] 条件判断/分支
    return 2; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  lVar2 = *(long *)(param_1 + 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(lVar2 + 0x10);
  *(undefined4 *)(param_1 + 100) = *(undefined4 *)(lVar2 + 0x2c);
  *(undefined8 *)(param_1 + 0x68) = 0xffffffffffffffff;
  if ((*(int *)(lVar2 + 0x24) == 1) && // [自动静态注释] 条件判断/分支
     (lVar2 = (**(code **)(**(long **)(param_1 + 0x18) + 0x18))(), lVar2 != 0)) { // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    plVar3 = (long *)(**(code **)(**(long **)(param_1 + 0x18) + 0x18))(); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar4 = (**(code **)(*plVar3 + 0x10))(); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined8 *)(param_1 + 0x68) = uVar4;
  } // [自动静态注释] 作用域/控制流边界
  uVar1 = (**(code **)(**(long **)(param_1 + 0x18) + 0x68))(); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined4 *)(param_1 + 0x70) = uVar1;
  *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(*(long *)(param_1 + 0x10) + 0x20);
  *(bool *)(param_1 + 0x81) = (param_5[1] & 0xf00) == 0x300;
  FUN__text__0056e0c0(*(undefined8 *)(param_1 + 0x28),param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
  return 1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


