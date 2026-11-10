/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00591E80
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00691e80; name: FUN_.text__00691e80
 */


/* WARNING: Type propagation algorithm not settling */

undefined8 * FUN__text__00691e80(long param_1,undefined8 *param_2,ulong param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined8 uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  uVar2 = param_2[6]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar7 = (undefined8 *)param_2[4]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (param_3 < uVar2) { // [自动静态注释] 条件判断/分支
    if (((puVar7 == (undefined8 *)0x0) || (*(char *)((long)puVar7 + 0x39) != '\x01')) && // [自动静态注释] 条件判断/分支
       ((puVar7[4] == 0 || (*(char *)(puVar7[4] + 0x39) != '\x01')))) { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      *(bool *)((long)param_2 + 0x39) = *(char *)((long)param_2 + 0x39) == '\0';
      *(bool *)((long)puVar7 + 0x39) = *(char *)((long)puVar7 + 0x39) == '\0';
      *(bool *)(param_2[5] + 0x39) = *(char *)(param_2[5] + 0x39) == '\0';
      lVar3 = param_2[5]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar7 = *(undefined8 **)(lVar3 + 0x20); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if ((puVar7 != (undefined8 *)0x0) && (*(char *)((long)puVar7 + 0x39) == '\x01')) { // [自动静态注释] 条件判断/分支
        *(undefined8 *)(lVar3 + 0x20) = puVar7[5];
        puVar7[5] = lVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *(undefined1 *)((long)puVar7 + 0x39) = *(undefined1 *)(lVar3 + 0x39);
        *(undefined1 *)(lVar3 + 0x39) = 1;
        param_2[5] = puVar7; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        param_2[5] = puVar7[4]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        puVar7[4] = param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *(undefined1 *)((long)puVar7 + 0x39) = *(undefined1 *)((long)param_2 + 0x39);
        *(undefined1 *)((long)param_2 + 0x39) = 1;
        *(bool *)((long)puVar7 + 0x39) = *(char *)((long)puVar7 + 0x39) == '\0';
        *(bool *)(puVar7[4] + 0x39) = *(char *)(puVar7[4] + 0x39) == '\0';
        *(bool *)(puVar7[5] + 0x39) = *(char *)(puVar7[5] + 0x39) == '\0';
        uVar1 = FUN__text__00691e80(param_1,puVar7[4]); // [自动静态注释] 调用尚未恢复正式名称的函数
        puVar7[4] = uVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        puVar4 = (undefined8 *)puVar7[5]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        param_2 = puVar7; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        goto joined_r0x0069214c; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
    uVar1 = FUN__text__00691e80(param_1,param_2[4]); // [自动静态注释] 调用尚未恢复正式名称的函数
    param_2[4] = uVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar4 = (undefined8 *)param_2[5]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    if ((puVar7 == (undefined8 *)0x0) || (*(char *)((long)puVar7 + 0x39) != '\x01')) { // [自动静态注释] 条件判断/分支
      lVar3 = param_2[5]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar7 = param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      param_2[4] = puVar7[5]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar7[5] = param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined1 *)((long)puVar7 + 0x39) = *(undefined1 *)((long)param_2 + 0x39);
      *(undefined1 *)((long)param_2 + 0x39) = 1;
      lVar3 = puVar7[5]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar2 = puVar7[6]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    if ((uVar2 == param_3) && (lVar3 == 0)) { // [自动静态注释] 条件判断/分支
      *puVar7 = *(undefined8 *)(param_1 + 8);
      *(undefined8 **)(param_1 + 8) = puVar7;
      return (undefined8 *)0x0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
    if ((*(char *)(lVar3 + 0x39) != '\x01') && // [自动静态注释] 条件判断/分支
       ((*(long *)(lVar3 + 0x20) == 0 || (*(char *)(*(long *)(lVar3 + 0x20) + 0x39) != '\x01')))) { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      *(bool *)((long)puVar7 + 0x39) = *(char *)((long)puVar7 + 0x39) == '\0';
      *(bool *)(puVar7[4] + 0x39) = *(char *)(puVar7[4] + 0x39) == '\0';
      *(bool *)(puVar7[5] + 0x39) = *(char *)(puVar7[5] + 0x39) == '\0';
      puVar4 = (undefined8 *)puVar7[4]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if ((puVar4[4] != 0) && (*(char *)(puVar4[4] + 0x39) == '\x01')) { // [自动静态注释] 条件判断/分支
        puVar7[4] = puVar4[5]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        puVar4[5] = puVar7; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *(undefined1 *)((long)puVar4 + 0x39) = *(undefined1 *)((long)puVar7 + 0x39);
        *(undefined1 *)((long)puVar7 + 0x39) = 1;
        *(bool *)((long)puVar4 + 0x39) = *(char *)((long)puVar4 + 0x39) == '\0';
        *(bool *)(puVar4[4] + 0x39) = *(char *)(puVar4[4] + 0x39) == '\0';
        *(bool *)(puVar4[5] + 0x39) = *(char *)(puVar4[5] + 0x39) == '\0';
        puVar7 = puVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
    puVar4 = (undefined8 *)puVar7[5]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (puVar7[6] == param_3) { // [自动静态注释] 条件判断/分支
      puVar6 = puVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      do { // [自动静态注释] 循环/迭代
        puVar5 = puVar6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        puVar6 = (undefined8 *)puVar5[4]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } while (puVar6 != (undefined8 *)0x0); // [自动静态注释] 循环/迭代
      if (puVar4 == (undefined8 *)0x0) { // [自动静态注释] 条件判断/分支
        param_2 = (undefined8 *)0x0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        uVar2 = puVar5[6]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        param_2 = puVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        do { // [自动静态注释] 循环/迭代
          while ((ulong)param_2[6] <= uVar2) { // [自动静态注释] 循环/迭代
            if ((uVar2 <= (ulong)param_2[6]) || // [自动静态注释] 条件判断/分支
               (param_2 = (undefined8 *)param_2[5], param_2 == (undefined8 *)0x0)) // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            goto LAB__text__00692178; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          } // [自动静态注释] 作用域/控制流边界
          param_2 = (undefined8 *)param_2[4]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        } while (param_2 != (undefined8 *)0x0); // [自动静态注释] 循环/迭代
      } // [自动静态注释] 作用域/控制流边界
LAB__text__00692178: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      uVar1 = FUN__text__006922c8(puVar4); // [自动静态注释] 调用尚未恢复正式名称的函数
      param_2[5] = uVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      param_2[4] = puVar7[4]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined1 *)((long)param_2 + 0x39) = *(undefined1 *)((long)puVar7 + 0x39);
      *puVar7 = *(undefined8 *)(param_1 + 8);
      *(undefined8 **)(param_1 + 8) = puVar7;
      puVar4 = (undefined8 *)param_2[5]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      puVar4 = (undefined8 *)FUN__text__00691e80(param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
      puVar7[5] = puVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      param_2 = puVar7; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
joined_r0x0069214c: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  if ((puVar4 == (undefined8 *)0x0) || (*(char *)((long)puVar4 + 0x39) != '\x01')) { // [自动静态注释] 条件判断/分支
    puVar7 = (undefined8 *)param_2[4]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    param_2[5] = puVar4[4]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar4[4] = param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined1 *)((long)puVar4 + 0x39) = *(undefined1 *)((long)param_2 + 0x39);
    *(undefined1 *)((long)param_2 + 0x39) = 1;
    puVar7 = (undefined8 *)puVar4[4]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    param_2 = puVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  if ((puVar7 == (undefined8 *)0x0) || (*(char *)((long)puVar7 + 0x39) != '\x01')) { // [自动静态注释] 条件判断/分支
    return param_2; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  if ((puVar7[4] == 0) || (*(char *)(puVar7[4] + 0x39) != '\x01')) { // [自动静态注释] 条件判断/分支
    lVar3 = param_2[5]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar4 = puVar7; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar7 = param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    param_2[4] = puVar7[5]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar7[5] = param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined1 *)((long)puVar7 + 0x39) = *(undefined1 *)((long)param_2 + 0x39);
    *(undefined1 *)((long)param_2 + 0x39) = 1;
    puVar4 = (undefined8 *)puVar7[4]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (puVar4 == (undefined8 *)0x0) { // [自动静态注释] 条件判断/分支
      return puVar7; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
    if (*(char *)((long)puVar4 + 0x39) != '\x01') { // [自动静态注释] 条件判断/分支
      return puVar7; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
    lVar3 = puVar7[5]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  if ((lVar3 == 0) || (*(char *)(lVar3 + 0x39) != '\x01')) { // [自动静态注释] 条件判断/分支
    return puVar7; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  *(bool *)((long)puVar7 + 0x39) = *(char *)((long)puVar7 + 0x39) == '\0';
  *(bool *)((long)puVar4 + 0x39) = *(char *)((long)puVar4 + 0x39) == '\0';
  *(bool *)(puVar7[5] + 0x39) = *(char *)(puVar7[5] + 0x39) == '\0';
  return puVar7; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


