/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_002E705C
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003e705c; name: FUN_.text__003e705c
 */


void FUN__text__003e705c(long param_1,long param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  code *pcVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar4 = *(long *)(param_2 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (lVar4 != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  lVar1 = *(long *)(param_1 + 0x68); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(long *)(param_1 + 0x68) = lVar4;
  if (lVar1 != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  pcVar2 = *(code **)(param_1 + 0x78); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (pcVar2 != (code *)0x0) { // [自动静态注释] 条件判断/分支
    *(undefined8 *)(param_1 + 0x80) = 0;
    *(undefined8 *)(param_1 + 0x88) = 0;
    *(undefined8 *)(param_1 + 0x70) = 0;
    *(undefined8 *)(param_1 + 0x78) = 0;
    (*pcVar2)(param_1 + 0x90); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  if (*(code **)(param_2 + 0x20) != (code *)0x0) { // [自动静态注释] 条件判断/分支
    (**(code **)(param_2 + 0x20))(param_2 + 0x30,param_1 + 0x90); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    uVar3 = *(undefined8 *)(param_2 + 0x28); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_2 + 0x18);
    *(undefined8 *)(param_1 + 0x88) = uVar3;
    uVar3 = *(undefined8 *)(param_2 + 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_2 + 0x20);
    *(undefined8 *)(param_1 + 0x70) = uVar3;
  } // [自动静态注释] 作用域/控制流边界
  pcVar2 = *(code **)(param_1 + 0xf8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (pcVar2 != (code *)0x0) { // [自动静态注释] 条件判断/分支
    *(undefined8 *)(param_1 + 0x100) = 0;
    *(undefined8 *)(param_1 + 0x108) = 0;
    *(undefined8 *)(param_1 + 0xf0) = 0;
    *(undefined8 *)(param_1 + 0xf8) = 0;
    (*pcVar2)(param_1 + 0x110); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  if (*(code **)(param_2 + 0xa0) != (code *)0x0) { // [自动静态注释] 条件判断/分支
    (**(code **)(param_2 + 0xa0))(param_2 + 0xb0,param_1 + 0x110); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    uVar3 = *(undefined8 *)(param_2 + 0xa8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined8 *)(param_1 + 0xf8) = *(undefined8 *)(param_2 + 0x98);
    *(undefined8 *)(param_1 + 0x108) = uVar3;
    uVar3 = *(undefined8 *)(param_2 + 0x90); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined8 *)(param_1 + 0x100) = *(undefined8 *)(param_2 + 0xa0);
    *(undefined8 *)(param_1 + 0xf0) = uVar3;
  } // [自动静态注释] 作用域/控制流边界
  uVar3 = FUN__text__003e5edc(*(undefined8 *)(param_1 + 0x68)); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__0069bb80(*(undefined8 *)(param_1 + 0x58),uVar3); // [自动静态注释] 调用尚未恢复正式名称的函数
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


