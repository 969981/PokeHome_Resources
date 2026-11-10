/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_004D5724
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005d5724; name: FUN_.text__005d5724
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__005d5724(long param_1,undefined8 param_2,undefined4 param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long *plVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_60; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_58; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_50; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_48; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  plVar1 = _DAT_008a0228; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined4 *)(param_1 + 0x118) = param_3;
  uVar4 = _DAT_008a0448; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar5 = *(undefined8 *)(*plVar1 + 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar3 = FUN__text__006ee2ac(_DAT_008a0448); // [自动静态注释] 调用尚未恢复正式名称的函数
  uVar4 = FUN__text__006ee384(uVar4,param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__005a5684(&local_60,uVar5,0,uVar3,uVar4); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(undefined8 *)(param_1 + 0x90) = local_60;
  if (*(long *)(param_1 + 0x98) != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)(*(long *)(param_1 + 0x98) + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  lVar2 = local_58; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_60 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_58 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(long *)(param_1 + 0x98) = lVar2;
  *(undefined8 *)(param_1 + 0xa0) = local_50;
  *(undefined8 *)(param_1 + 0xa8) = local_48;
  local_50 = 0xffffffffffffffff; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_48 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__005b509c(&local_60); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (local_58 != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)(local_58 + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  uVar4 = FUN__text__005b50f0((undefined8 *)(param_1 + 0x90)); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__006ee434(param_1 + 0x50,_DAT_008a0448,param_2,uVar4,*(undefined8 *)(param_1 + 0xa0), // [自动静态注释] 调用尚未恢复正式名称的函数
                      *(undefined8 *)(param_1 + 0xa8));
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


