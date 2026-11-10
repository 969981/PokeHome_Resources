/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00082AA0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00182aa0; name: FUN_.text__00182aa0
 */


/* WARNING: Removing unreachable block (ram,0x00182c74) */
/* WARNING: Removing unreachable block (ram,0x00182d18) */
/* WARNING: Removing unreachable block (ram,0x00182d2c) */

void FUN__text__00182aa0(long param_1,uint param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long *plVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_d0 [14]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_60; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_58; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_50; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined2 local_48; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 local_46; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined2 local_45; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  local_58 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_50 = 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_48 = 0x101; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_46 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_45 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar1 = (long *)(*(long *)(*(long *)(param_1 + 0x78) + 0x640) + 0x60); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  (**(code **)(*plVar1 + 8))(plVar1,0); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  local_60 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (param_2 < 5) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Could not emulate address calculation at 0x00182b10 */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK__text__00182b1c + (ulong)*(byte *)((ulong)param_2 + 0x7257d8) * 4))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  puVar3 = *(undefined8 **)(*(long *)(param_1 + 0x60) + 0x60); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar1 = (long *)(**(code **)*puVar3)(puVar3); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar2 = (long *)FUN__text__0012615c(); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (plVar2 != plVar1) { // [自动静态注释] 条件判断/分支
    do { // [自动静态注释] 循环/迭代
      plVar1 = (long *)*plVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (plVar1 != plVar2 && plVar1 != (long *)0x0); // [自动静态注释] 循环/迭代
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__001156d0(local_d0,*(undefined8 *)(puVar3[0xaf] + 0xb0),0); // [自动静态注释] 调用尚未恢复正式名称的函数
  lVar4 = *(long *)(local_d0[0] + 0x60); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((lVar4 == 0) || ((**(code **)(*(long *)(lVar4 + 0x48) + 0x10))(), local_d0[0] != 0)) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)(local_d0[0] + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__005f2d98(lVar4,&local_60,*(undefined8 *)(param_1 + 0x88)); // [自动静态注释] 调用尚未恢复正式名称的函数
  local_58 = *(undefined8 *)(param_1 + 0x88); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__00131da0(*(undefined8 *)(param_1 + 0x78),&local_58); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__00128ec0(*(undefined8 *)(param_1 + 0x78),0); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(uint *)(param_1 + 0x80) = param_2;
  (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


