/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00174ACC
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00274acc; name: FUN_.text__00274acc
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00274acc(long param_1,undefined4 param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined8 uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_78; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_70; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_68; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_60 [3]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_48; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  *(undefined4 *)(param_1 + 0x730) = param_2;
  uVar1 = *(undefined8 *)(param_1 + 0x728); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_60[0] = 0xc636a36f684155b1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar2 = *(long *)(*(long *)(param_1 + 0x720) + 0x2e8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (lVar2 == 0) { // [自动静态注释] 条件判断/分支
    FUN__text__005f2d98(uVar1,local_60,0); // [自动静态注释] 调用尚未恢复正式名称的函数
    lVar2 = *(long *)(*(long *)(param_1 + 0x720) + 0x2e0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    plVar3 = (long *)(lVar2 + 0x48); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    (**(code **)(*plVar3 + 0x10))(plVar3); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    FUN__text__005f2d98(uVar1,local_60,lVar2); // [自动静态注释] 调用尚未恢复正式名称的函数
    (**(code **)(*plVar3 + 0x18))(plVar3); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    lVar2 = *(long *)(*(long *)(param_1 + 0x720) + 0x2e0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  if (lVar2 != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__00166508(lVar2,0,param_2,1,0,1); // [自动静态注释] 调用尚未恢复正式名称的函数
  (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  FUN__text__003c8c20(*(undefined8 *)(param_1 + 0x720),0x72d158,0xb); // [自动静态注释] 调用尚未恢复正式名称的函数
  uVar1 = *_DAT_0089f598; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_78 = 0xc973b2050f4a2ee4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uStack_70 = 0x71d7fc; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_68 = 0x10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__005e927c(local_60,&local_78); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__003ef578(*(undefined4 *)(_DAT_0089fcc8 + (long)*(int *)(param_1 + 0x730) * 4),uVar1, // [自动静态注释] 调用尚未恢复正式名称的函数
                      local_60,0xffffffffffffffff,0); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  if (local_48 != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


