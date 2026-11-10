/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0012ECE4
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0022ece4; name: FUN_.text__0022ece4
 */


void FUN__text__0022ece4(undefined8 param_1,long param_2,undefined8 *param_3,undefined8 param_4, // [自动静态注释] 调用尚未恢复正式名称的函数
                        undefined8 param_5,undefined4 param_6,undefined4 param_7,uint param_8) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义

{ // [自动静态注释] 作用域/控制流边界
  undefined4 uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_58; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_38; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  uVar2 = *param_3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar3 = *(long *)(param_2 + 0x2e8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_58 = param_5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_38 = param_4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (lVar3 == 0) { // [自动静态注释] 条件判断/分支
    FUN__text__005f2d98(uVar2,&local_58,0); // [自动静态注释] 调用尚未恢复正式名称的函数
    lVar3 = *(long *)(param_2 + 0x2e0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    plVar4 = (long *)(lVar3 + 0x48); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    (**(code **)(*plVar4 + 0x10))(plVar4); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    FUN__text__005f2d98(uVar2,&local_58,lVar3); // [自动静态注释] 调用尚未恢复正式名称的函数
    (**(code **)(*plVar4 + 0x18))(plVar4); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    lVar3 = *(long *)(param_2 + 0x2e0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  if (lVar3 != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  uVar1 = 2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((param_8 & 1) == 0) { // [自动静态注释] 条件判断/分支
    uVar1 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__00166508(lVar3,0,param_7,param_6,uVar1,1); // [自动静态注释] 调用尚未恢复正式名称的函数
  (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  FUN__text__003c8c20(param_2,&local_38,0xb); // [自动静态注释] 调用尚未恢复正式名称的函数
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


