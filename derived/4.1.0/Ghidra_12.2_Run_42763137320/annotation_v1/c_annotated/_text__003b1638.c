/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_002B1638
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003b1638; name: FUN_.text__003b1638
 */


bool FUN__text__003b1638(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  int iVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_44; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long **local_40; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lStack_38; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_18; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  iVar1 = *(int *)(*(long *)(param_1 + 0x7c8) + 0x60); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (iVar1 == 0) { // [自动静态注释] 条件判断/分支
    if ((*(int *)(param_1 + 0x868) != -1) && // [自动静态注释] 条件判断/分支
       (plVar2 = (long *)FUN__text__003b8e30(param_1 + 0x788,0xffffffff), plVar2 != (long *)0x0)) { // [自动静态注释] 调用尚未恢复正式名称的函数
      lStack_38 = *plVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      local_40 = (long **)&local_18; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      local_18 = (long *)0x0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      FUN__text__003aa1c0(param_1,&local_40,0); // [自动静态注释] 调用尚未恢复正式名称的函数
      FUN__text__003a14e8(local_18,0); // [自动静态注释] 调用尚未恢复正式名称的函数
      if (*(code **)(param_1 + 0xc0) != (code *)0x0) { // [自动静态注释] 条件判断/分支
        local_40 = (long **)*plVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        local_18 = (long *)CONCAT44(local_18._4_4_,*(undefined4 *)(param_1 + 0x868)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        local_44 = (undefined4)plVar2[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        (**(code **)(param_1 + 0xc0))(param_1 + 0xe0,&local_18,&local_40,&local_44); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
    lVar4 = *(long *)(param_1 + 2000); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined1 *)(lVar4 + 0x149) = 1;
    *(undefined8 *)(lVar4 + 0x150) = 0;
    if (*(long *)(lVar4 + 0xb0) == -0x340d631b7bddd9bb || *(long *)(lVar4 + 0xb0) == 0) { // [自动静态注释] 条件判断/分支
      puVar3 = (undefined8 *)FUN__text__003b8e30(param_1 + 0x788,*(undefined4 *)(param_1 + 0x868)); // [自动静态注释] 调用尚未恢复正式名称的函数
    } // [自动静态注释] 作用域/控制流边界
    else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      (**(code **)(**(long **)(lVar4 + 0x98) + 0x78))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      puVar3 = (undefined8 *)FUN__text__003b8e30(param_1 + 0x788,*(undefined4 *)(param_1 + 0x868)); // [自动静态注释] 调用尚未恢复正式名称的函数
    } // [自动静态注释] 作用域/控制流边界
    if (puVar3 != (undefined8 *)0x0) { // [自动静态注释] 条件判断/分支
      if (*(code **)(param_1 + 0xc0) != (code *)0x0) { // [自动静态注释] 条件判断/分支
        local_40 = (long **)*puVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        local_44 = *(undefined4 *)(puVar3 + 2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        local_18._4_4_ = (undefined4)((ulong)local_18 >> 0x20); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        local_18 = (long *)CONCAT44(local_18._4_4_,*(undefined4 *)((long)puVar3 + 0xc)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        (**(code **)(param_1 + 0xc0))(param_1 + 0xe0,&local_18,&local_40,&local_44); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      } // [自动静态注释] 作用域/控制流边界
      lStack_38 = *puVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      local_40 = (long **)&local_18; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      local_18 = (long *)0x0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      FUN__text__003aa1c0(param_1,&local_40,0); // [自动静态注释] 调用尚未恢复正式名称的函数
      plVar2 = local_18; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      (**(code **)(*local_18 + 0x38))(local_18,param_1 + 0x870); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      local_40 = (long **)plVar2[0x11]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      (**(code **)(**(long **)(param_1 + 0x98) + 0x60))(*(long **)(param_1 + 0x98),&local_40,1); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  return iVar1 == 0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


