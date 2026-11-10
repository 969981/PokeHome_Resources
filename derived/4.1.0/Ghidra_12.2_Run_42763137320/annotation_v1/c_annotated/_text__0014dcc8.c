/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0004DCC8
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0014dcc8; name: FUN_.text__0014dcc8
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0014dcc8(long *param_1,long *param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined8 *puVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 auStack_60 [24]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_48; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  FUN__text__005e927c(auStack_60,0x86a768); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__005a2540(param_1,auStack_60,2); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (local_48 != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  lVar2 = _DAT_008a0050; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0x4b] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0x4c] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0x4d] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0x4e] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *param_1 = lVar2 + 0x10;
  param_1[9] = lVar2 + 0xb0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[10] = lVar2 + 0xf0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar1 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x18,8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar3 = tpidr_el0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar3 = uVar3 & 0xffffffffffffe000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(long *)(uVar3 + 0x98) == 0x10) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10(); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  *(long **)(uVar3 + *(long *)(uVar3 + 0x98) * 8 + 0x18) = param_2;
  *(long *)(uVar3 + 0x98) = *(long *)(uVar3 + 0x98) + 1;
  puVar1[2] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *puVar1 = 0x86a790;
  puVar1[1] = param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar2 = FUN__text__0014e0d8(auStack_60,param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (lVar2 != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  if (puVar1[2] != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)(puVar1[2] + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  puVar1[2] = lVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__005a27b0(puVar1[1],lVar2); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(long *)(uVar3 + 0x98) = *(long *)(uVar3 + 0x98) + -1;
  lVar2 = param_1[0x4b]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0x4b] = (long)puVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (lVar2 != 0) { // [自动静态注释] 条件判断/分支
    if (*(long *)(lVar2 + 0x10) != 0) { // [自动静态注释] 条件判断/分支
      (**(code **)(*(long *)(*(long *)(lVar2 + 0x10) + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      *(undefined8 *)(lVar2 + 0x10) = 0;
    } // [自动静态注释] 作用域/控制流边界
    (**(code **)(*(long *)param_1[0x4c] + 0x18)) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
              ((long *)param_1[0x4c],lVar2,param_1[0x4d],param_1[0x4e]); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  param_1[0x4c] = (long)param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0x4d] = 0x18; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0x4e] = 8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


