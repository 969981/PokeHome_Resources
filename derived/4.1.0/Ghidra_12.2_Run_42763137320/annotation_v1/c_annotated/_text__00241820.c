/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00141820
 * 用途/行为：用途尚未确认；代码可观察到：内存复制/初始化, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00241820; name: FUN_.text__00241820
 */


void FUN__text__00241820(long param_1,uint param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long *plVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_198 [2]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_188; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 local_184; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 auStack_f8 [168]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  puVar3 = *(undefined8 **)(*(long *)(param_1 + 0x60) + 0x60); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar1 = (long *)(**(code **)*puVar3)(puVar3); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar2 = (long *)FUN__text__0012615c(); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (plVar2 != plVar1) { // [自动静态注释] 条件判断/分支
    do { // [自动静态注释] 循环/迭代
      plVar1 = (long *)*plVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (plVar1 != plVar2 && plVar1 != (long *)0x0); // [自动静态注释] 循环/迭代
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__001156d0(local_198,*(undefined8 *)(puVar3[0xaf] + 0xb0),0); // [自动静态注释] 调用尚未恢复正式名称的函数
  lVar4 = *(long *)(local_198[0] + 0x60); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((lVar4 == 0) || ((**(code **)(*(long *)(lVar4 + 0x48) + 0x10))(), local_198[0] != 0)) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)(local_198[0] + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  memcpy(auStack_f8,(void *)0x72bb00,0x98); // [自动静态注释] 内存复制、清零或移动
  if (param_2 - 5 < 8) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Could not emulate address calculation at 0x002418f4 */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK__text__00241904 + (ulong)*(byte *)((ulong)(param_2 - 5) + 0x72ba9c) * 4))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__005f2d98(lVar4,auStack_f8 + (ulong)param_2 * 8,*(undefined8 *)(param_1 + 0xb8)); // [自动静态注释] 调用尚未恢复正式名称的函数
  local_198[0] = *(long *)(param_1 + 0xb8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_184 = 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_188 = 0x1000101; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_198[1] = 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__00131da0(*(undefined8 *)(param_1 + 0x80),local_198); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__00128ec0(*(undefined8 *)(param_1 + 0x80),0); // [自动静态注释] 调用尚未恢复正式名称的函数
  (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


