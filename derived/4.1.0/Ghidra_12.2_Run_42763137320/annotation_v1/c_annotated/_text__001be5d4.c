/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_000BE5D4
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001be5d4; name: FUN_.text__001be5d4
 */


void FUN__text__001be5d4(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  uint uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar3 = *(long *)(*(long *)(param_1 + 8) + 0x2d0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (lVar3 == 0) { // [自动静态注释] 条件判断/分支
    lVar4 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    lVar4 = *(long *)(*(long *)(param_1 + 8) + 0x2d0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  plVar5 = (long *)(lVar4 + 0x48); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  (**(code **)(*plVar5 + 0x10))(plVar5); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  lVar6 = *(long *)(*(long *)(param_1 + 8) + 0x2d0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar4 = *(long *)(*(long *)(param_1 + 0x38) + 0xe8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar1 = *(uint *)(lVar4 + 0x40); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar2 = *(uint *)(lVar4 + 0x44); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar7 = (long *)(lVar6 + 0x48); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  (**(code **)(*plVar7 + 0x10))(plVar7); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  lVar4 = param_1 + (ulong)uVar1 * 1000 + (ulong)uVar2 * 200; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__003c7c60(lVar6,lVar4 + 0x13f8,1); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__0012c378(*(long *)(param_1 + 8) + 0x110,lVar4 + 0x14a0); // [自动静态注释] 调用尚未恢复正式名称的函数
  (**(code **)(*plVar7 + 0x18))(plVar7); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  (**(code **)(*plVar5 + 0x18))(plVar5); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  FUN__text__001be704(*(undefined8 *)(*(long *)(param_1 + 0x38) + 0x68)); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__001be704(*(undefined8 *)(*(long *)(param_1 + 0x38) + 0x88)); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (lVar3 == 0) { // [自动静态注释] 条件判断/分支
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
                    /* WARNING: Could not recover jumptable at 0x001be6e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


