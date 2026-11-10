/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_000AB52C
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001ab52c; name: FUN_.text__001ab52c
 */


void FUN__text__001ab52c(long param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4, // [自动静态注释] 调用尚未恢复正式名称的函数
                        undefined4 param_5,undefined8 *param_6,undefined4 param_7) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义

{ // [自动静态注释] 作用域/控制流边界
  undefined4 uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar2 = *(long *)(*(long *)(param_1 + 8) + 0x1c0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (lVar2 != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  uVar3 = *param_3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar4 = *(long *)(lVar2 + 0x2e8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (lVar4 == 0) { // [自动静态注释] 条件判断/分支
    FUN__text__005f2d98(uVar3,param_4,0); // [自动静态注释] 调用尚未恢复正式名称的函数
    lVar4 = *(long *)(lVar2 + 0x2e0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    plVar5 = (long *)(lVar4 + 0x48); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    (**(code **)(*plVar5 + 0x10))(plVar5); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    FUN__text__005f2d98(uVar3,param_4,lVar4); // [自动静态注释] 调用尚未恢复正式名称的函数
    (**(code **)(*plVar5 + 0x18))(plVar5); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    lVar4 = *(long *)(lVar2 + 0x2e0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  if (lVar4 != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  uVar1 = FUN__text__00306724(*param_6,param_7); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__00166108(lVar4,param_5,uVar1); // [自动静态注释] 调用尚未恢复正式名称的函数
  (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  FUN__text__003c8c20(lVar2,param_2,0xb); // [自动静态注释] 调用尚未恢复正式名称的函数
                    /* WARNING: Could not recover jumptable at 0x001ab634. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


