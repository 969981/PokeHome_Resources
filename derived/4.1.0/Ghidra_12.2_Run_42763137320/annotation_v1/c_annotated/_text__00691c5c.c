/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00591C5C
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00691c5c; name: FUN_.text__00691c5c
 */


undefined8 * FUN__text__00691c5c(long param_1,undefined8 *param_2,undefined8 *param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  char cVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (param_2 == (undefined8 *)0x0) { // [自动静态注释] 条件判断/分支
    *(undefined1 *)((long)param_3 + 0x39) = 1;
    param_3[4] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    param_3[5] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    return param_3; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  if ((ulong)param_3[6] < (ulong)param_2[6]) { // [自动静态注释] 条件判断/分支
    uVar2 = FUN__text__00691c5c(param_1,param_2[4]); // [自动静态注释] 调用尚未恢复正式名称的函数
    param_2[4] = uVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else if (param_3[6] == param_2[6]) { // [自动静态注释] 条件判断/分支
    if (param_2 != param_3) { // [自动静态注释] 条件判断/分支
      param_3[5] = param_2[5]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      param_3[4] = param_2[4]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined1 *)((long)param_3 + 0x39) = *(undefined1 *)((long)param_2 + 0x39);
      *param_2 = *(undefined8 *)(param_1 + 8);
      *(undefined8 **)(param_1 + 8) = param_2;
      param_2 = param_3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    uVar2 = FUN__text__00691c5c(param_1,param_2[5]); // [自动静态注释] 调用尚未恢复正式名称的函数
    param_2[5] = uVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  puVar4 = (undefined8 *)param_2[5]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (((puVar4 == (undefined8 *)0x0) || (*(char *)((long)puVar4 + 0x39) != '\x01')) || // [自动静态注释] 条件判断/分支
     ((param_2[4] != 0 && (*(char *)(param_2[4] + 0x39) == '\x01')))) { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    puVar3 = (undefined8 *)param_2[4]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar4 = param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    param_2[5] = puVar4[4]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar4[4] = param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined1 *)((long)puVar4 + 0x39) = *(undefined1 *)((long)param_2 + 0x39);
    *(undefined1 *)((long)param_2 + 0x39) = 1;
    puVar3 = (undefined8 *)puVar4[4]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  if (puVar3 == (undefined8 *)0x0) { // [自动静态注释] 条件判断/分支
    return puVar4; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  puVar5 = puVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(char *)((long)puVar3 + 0x39) == '\x01') { // [自动静态注释] 条件判断/分支
    if (puVar3[4] != 0) { // [自动静态注释] 条件判断/分支
      if (*(char *)(puVar3[4] + 0x39) != '\x01') goto LAB__text__00691d9c; // [自动静态注释] 条件判断/分支
      puVar4[4] = puVar3[5]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar3[5] = puVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined1 *)((long)puVar3 + 0x39) = *(undefined1 *)((long)puVar4 + 0x39);
      *(undefined1 *)((long)puVar4 + 0x39) = 1;
      puVar4 = puVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar5 = (undefined8 *)puVar3[4]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if ((undefined8 *)puVar3[4] == (undefined8 *)0x0) { // [自动静态注释] 条件判断/分支
        return puVar3; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
    cVar1 = *(char *)((long)puVar5 + 0x39); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
LAB__text__00691d9c: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    cVar1 = *(char *)((long)puVar3 + 0x39); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  if (((cVar1 == '\x01') && (puVar4[5] != 0)) && (*(char *)(puVar4[5] + 0x39) == '\x01')) { // [自动静态注释] 条件判断/分支
    *(bool *)((long)puVar4 + 0x39) = *(char *)((long)puVar4 + 0x39) == '\0';
    *(bool *)((long)puVar5 + 0x39) = *(char *)((long)puVar5 + 0x39) == '\0';
    *(bool *)(puVar4[5] + 0x39) = *(char *)(puVar4[5] + 0x39) == '\0';
    return puVar4; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  return puVar4; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


