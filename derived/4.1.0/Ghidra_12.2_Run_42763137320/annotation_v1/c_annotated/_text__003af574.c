/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_002AF574
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003af574; name: FUN_.text__003af574
 */


void FUN__text__003af574(long param_1,long param_2,int param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined4 uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_48; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *local_40; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_38; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_18; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (param_3 == 1) { // [自动静态注释] 条件判断/分支
    lVar4 = *(long *)(param_1 + 0x800); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    iVar2 = FUN__text__003b7414(lVar4,*(undefined4 *)(lVar4 + 0x14),*(undefined4 *)(lVar4 + 0x10)); // [自动静态注释] 调用尚未恢复正式名称的函数
    lVar4 = FUN__text__003b8ec0(param_1 + 0x788,param_2 + 0x60); // [自动静态注释] 调用尚未恢复正式名称的函数
    if (*(int *)(lVar4 + 0xc) != iVar2 || *(char *)(param_1 + 0x853) != '\0') { // [自动静态注释] 条件判断/分支
      uVar1 = *(undefined4 *)(*(long *)(param_1 + 0x800) + 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar3 = FUN__text__003b78c0(*(long *)(param_1 + 0x800),*(int *)(lVar4 + 0xc),uVar1); // [自动静态注释] 调用尚未恢复正式名称的函数
      FUN__text__003adcc0(param_1,uVar3,uVar1); // [自动静态注释] 调用尚未恢复正式名称的函数
      return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  else if (param_3 == 0) { // [自动静态注释] 条件判断/分支
    lVar4 = *(long *)(param_1 + 0x800); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar1 = FUN__text__003b7414(lVar4,*(undefined4 *)(lVar4 + 0x14),*(undefined4 *)(lVar4 + 0x10)); // [自动静态注释] 调用尚未恢复正式名称的函数
    puVar5 = (undefined8 *)FUN__text__003b8e30(param_1 + 0x788,uVar1); // [自动静态注释] 调用尚未恢复正式名称的函数
    uStack_38 = *puVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_40 = &local_18; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_18 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    FUN__text__003aa1c0(param_1,&local_40,0); // [自动静态注释] 调用尚未恢复正式名称的函数
    local_48 = local_18; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    plVar6 = *(long **)(param_1 + 2000); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (local_18 != 0) { // [自动静态注释] 条件判断/分支
      (**(code **)(*(long *)(local_18 + 0x48) + 0x10))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
    (**(code **)(*plVar6 + 0x100))(plVar6,&local_48); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    if (local_48 != 0) { // [自动静态注释] 条件判断/分支
      (**(code **)(*(long *)(local_48 + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


