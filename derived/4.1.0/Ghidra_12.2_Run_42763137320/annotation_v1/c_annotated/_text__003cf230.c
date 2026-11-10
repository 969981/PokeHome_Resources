/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_002CF230
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003cf230; name: FUN_.text__003cf230
 */


void FUN__text__003cf230(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_88 [3]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_70; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_6c; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_64; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_5c; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_54; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 local_4c; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_48; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  *(undefined4 *)(param_1 + 0x18) = param_4;
  local_4c = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_5c = 0xb0100000008; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_54 = 0x100000001; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_70 = 0xb01; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined1 *)(param_1 + 0x20060) = 0;
  local_6c = 0x8000000080; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_48 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_88[1] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_88[2] = 0x8000000080; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_64 = 0x800000b01; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined8 *)(param_1 + 8) = param_2;
  *(undefined8 *)(param_1 + 0x10) = param_3;
  FUN__text__00146354(local_88,param_2,local_88 + 1); // [自动静态注释] 调用尚未恢复正式名称的函数
  lVar1 = *(long *)(param_1 + 0x20028); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (lVar1 != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  *(long *)(param_1 + 0x20028) = local_88[0];
  uVar2 = FUN__text__0059fd6c(local_88[0],1); // [自动静态注释] 调用尚未恢复正式名称的函数
  uVar4 = tpidr_el0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar4 = uVar4 & 0xffffffffffffe000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(long *)(uVar4 + 0x98) == 0x10) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10(); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  plVar3 = *(long **)(param_1 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(long **)(uVar4 + *(long *)(uVar4 + 0x98) * 8 + 0x18) = plVar3;
  *(long *)(uVar4 + 0x98) = *(long *)(uVar4 + 0x98) + 1;
  lVar1 = (**(code **)(*plVar3 + 0x10))(plVar3,0xf0,8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (lVar1 == 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*plVar3 + 0xb8))(plVar3); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__003d4088(lVar1,*(undefined8 *)(param_1 + 8),uVar2,0x80,0x80); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(long **)(lVar1 + 8) = plVar3;
  *(long *)(lVar1 + 0x10) = lVar1;
  *(undefined8 *)(lVar1 + 0x18) = 0xf0;
  *(undefined8 *)(lVar1 + 0x20) = 8;
  *(long *)(uVar4 + 0x98) = *(long *)(uVar4 + 0x98) + -1;
  (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  if (*(long *)(param_1 + 0x20048) != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)(*(long *)(param_1 + 0x20048) + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  *(long *)(param_1 + 0x20048) = lVar1;
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


