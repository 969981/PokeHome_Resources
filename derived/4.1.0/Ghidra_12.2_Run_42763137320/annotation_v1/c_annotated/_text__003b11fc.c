/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_002B11FC
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003b11fc; name: FUN_.text__003b11fc
 */


bool FUN__text__003b11fc(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  int iVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_54; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long **local_50; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lStack_48; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *local_28; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  iVar1 = *(int *)(*(long *)(param_1 + 0x7c8) + 0x60); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (iVar1 == 0) { // [自动静态注释] 条件判断/分支
    if ((*(int *)(param_1 + 0x868) != -1) && // [自动静态注释] 条件判断/分支
       (plVar3 = (long *)FUN__text__003b8e30(param_1 + 0x788,0xffffffff), plVar3 != (long *)0x0)) { // [自动静态注释] 调用尚未恢复正式名称的函数
      lStack_48 = *plVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      local_50 = &local_28; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      local_28 = (long *)0x0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      FUN__text__003aa1c0(param_1,&local_50,0); // [自动静态注释] 调用尚未恢复正式名称的函数
      FUN__text__003a14e8(local_28,0); // [自动静态注释] 调用尚未恢复正式名称的函数
      if (*(code **)(param_1 + 0xc0) != (code *)0x0) { // [自动静态注释] 条件判断/分支
        local_50 = (long **)*plVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        local_28 = (long *)CONCAT44(local_28._4_4_,*(undefined4 *)(param_1 + 0x868)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        local_54 = (undefined4)plVar3[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        (**(code **)(param_1 + 0xc0))(param_1 + 0xe0,&local_28,&local_50,&local_54); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
    lVar5 = *(long *)(param_1 + 2000); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined1 *)(lVar5 + 0x149) = 1;
    *(undefined8 *)(lVar5 + 0x150) = 0;
    if (*(long *)(lVar5 + 0xb0) != -0x340d631b7bddd9bb && *(long *)(lVar5 + 0xb0) != 0) { // [自动静态注释] 条件判断/分支
      (**(code **)(**(long **)(lVar5 + 0x98) + 0x78))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
    lVar5 = *(long *)(param_1 + 0x800); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar2 = FUN__text__003b7414(lVar5,*(undefined4 *)(lVar5 + 0x14),*(undefined4 *)(lVar5 + 0x10)); // [自动静态注释] 调用尚未恢复正式名称的函数
    puVar4 = (undefined8 *)FUN__text__003b8e30(param_1 + 0x788,uVar2); // [自动静态注释] 调用尚未恢复正式名称的函数
    if (*(code **)(param_1 + 0x2c0) != (code *)0x0) { // [自动静态注释] 条件判断/分支
      local_28 = (long *)CONCAT44(local_28._4_4_,uVar2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      local_50 = (long **)CONCAT44(local_50._4_4_,*(undefined4 *)(param_1 + 0x868)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      (**(code **)(param_1 + 0x2c0))(param_1 + 0x2e0,&local_50,&local_28); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
    if (*(code **)(param_1 + 0xc0) != (code *)0x0) { // [自动静态注释] 条件判断/分支
      local_50 = (long **)*puVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      local_28 = (long *)CONCAT44(local_28._4_4_,uVar2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      local_54 = *(undefined4 *)(puVar4 + 2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      (**(code **)(param_1 + 0xc0))(param_1 + 0xe0,&local_28,&local_50,&local_54); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
    lStack_48 = *puVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_50 = &local_28; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_28 = (long *)0x0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    FUN__text__003aa1c0(param_1,&local_50,0); // [自动静态注释] 调用尚未恢复正式名称的函数
    (**(code **)(*local_28 + 0x38))(local_28,param_1 + 0x870); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    puVar4 = (undefined8 *)FUN__text__003b8e30(param_1 + 0x788,*(undefined4 *)(param_1 + 0x868)); // [自动静态注释] 调用尚未恢复正式名称的函数
    if (puVar4 != (undefined8 *)0x0) { // [自动静态注释] 条件判断/分支
      if (*(code **)(param_1 + 0xc0) != (code *)0x0) { // [自动静态注释] 条件判断/分支
        local_50 = (long **)*puVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        local_54 = *(undefined4 *)(puVar4 + 2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        local_28 = (long *)CONCAT44(local_28._4_4_,*(undefined4 *)((long)puVar4 + 0xc)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        (**(code **)(param_1 + 0xc0))(param_1 + 0xe0,&local_28,&local_50,&local_54); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      } // [自动静态注释] 作用域/控制流边界
      lStack_48 = *puVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      local_50 = &local_28; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      local_28 = (long *)0x0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      FUN__text__003aa1c0(param_1,&local_50,0); // [自动静态注释] 调用尚未恢复正式名称的函数
      plVar3 = local_28; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      (**(code **)(*local_28 + 0x38))(local_28,param_1 + 0x880); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      local_50 = (long **)plVar3[0x11]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      (**(code **)(**(long **)(param_1 + 0x98) + 0x60))(*(long **)(param_1 + 0x98),&local_50,1); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  return iVar1 == 0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


