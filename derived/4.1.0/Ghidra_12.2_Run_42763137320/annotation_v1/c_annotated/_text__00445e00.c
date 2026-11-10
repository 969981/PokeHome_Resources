/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00345E00
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00445e00; name: FUN_.text__00445e00
 */


bool FUN__text__00445e00(long param_1,char *param_2,undefined4 param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  byte bVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  char cVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  bool bVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 *puVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  byte bVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar10; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar11; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  bVar8 = *(byte *)(param_1 + 0x38); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  bVar1 = bVar8 & 0xfd; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(byte *)(param_1 + 0x38) = bVar1;
  cVar3 = *param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((cVar3 == -0x70 && param_2[5] != '\0') || ((cVar3 == -2 && (*(ushort *)(param_2 + 4) == 0)))) // [自动静态注释] 条件判断/分支
  { // [自动静态注释] 作用域/控制流边界
    puVar6 = (undefined4 *)FUN__text__00400f80(0,0x98); // [自动静态注释] 调用尚未恢复正式名称的函数
    if (puVar6 == (undefined4 *)0x0) { // [自动静态注释] 条件判断/分支
      *(undefined8 *)(param_1 + 0x10) = 0;
      bVar5 = false; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      goto LAB__text__00445f84; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
    uVar10 = *(undefined8 *)param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar2 = *(undefined4 *)(param_2 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar11 = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *puVar6 = 1;
    *(undefined8 *)(puVar6 + 1) = uVar10;
    puVar6[3] = uVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined8 *)(puVar6 + 8) = 0;
    *(undefined8 *)(puVar6 + 10) = 0;
    *(undefined8 *)(puVar6 + 0x24) = 0;
    *(undefined8 *)(puVar6 + 0xc) = 0;
    *(undefined8 *)(puVar6 + 0xe) = 0;
    *(undefined8 *)(puVar6 + 0x10) = 0;
    *(undefined8 *)(puVar6 + 0x12) = 0;
    *(undefined8 *)(puVar6 + 0x14) = 0;
    *(undefined8 *)(puVar6 + 0x16) = 0;
    *(undefined8 *)(puVar6 + 0x18) = 0;
    *(undefined8 *)(puVar6 + 0x1a) = 0;
    *(undefined8 *)(puVar6 + 4) = uVar11;
    *(undefined8 *)(puVar6 + 6) = 0;
    *(undefined8 *)(puVar6 + 0x1c) = 0;
    *(undefined8 *)(puVar6 + 0x1e) = 0;
    *(undefined8 *)(puVar6 + 0x20) = 0;
    *(undefined8 *)(puVar6 + 0x22) = 0;
    *(undefined4 **)(param_1 + 0x10) = puVar6;
    puVar7 = (undefined8 *)FUN__text__00400f80(0,0x80); // [自动静态注释] 调用尚未恢复正式名称的函数
    *(undefined8 **)(puVar6 + 0xe) = puVar7;
    bVar5 = false; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (puVar7 == (undefined8 *)0x0) goto LAB__text__00445f84; // [自动静态注释] 条件判断/分支
    uVar9 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined8 **)(puVar6 + 0xc) = puVar7;
    puVar6[0x10] = 4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    do { // [自动静态注释] 循环/迭代
      puVar4 = puVar7; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar4[2] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar9 = uVar9 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined2 *)(puVar4 + 3) = 0xffff;
      *puVar4 = puVar4 + 4;
      puVar7 = puVar4 + 4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (uVar9 < (uint)puVar6[0x10]); // [自动静态注释] 循环/迭代
    *puVar4 = 0;
    puVar7 = (undefined8 *)FUN__text__00400f80(0,0x60); // [自动静态注释] 调用尚未恢复正式名称的函数
    *(undefined8 **)(puVar6 + 0x18) = puVar7;
    bVar5 = false; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (puVar7 == (undefined8 *)0x0) goto LAB__text__00445f84; // [自动静态注释] 条件判断/分支
    uVar9 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined8 **)(puVar6 + 0x16) = puVar7;
    puVar6[0x1a] = 4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    do { // [自动静态注释] 循环/迭代
      puVar4 = puVar7; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *puVar4 = puVar4 + 3;
      uVar9 = uVar9 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar7 = puVar4 + 3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (uVar9 < (uint)puVar6[0x1a]); // [自动静态注释] 循环/迭代
    *puVar4 = 0;
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    if (cVar3 == -0x80) { // [自动静态注释] 条件判断/分支
LAB__text__00445f5c: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      bVar8 = bVar1 | 4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      if (cVar3 == -0x70) { // [自动静态注释] 条件判断/分支
        if (param_2[5] == '\0') goto LAB__text__00445f5c; // [自动静态注释] 条件判断/分支
      } // [自动静态注释] 作用域/控制流边界
      else if (cVar3 == -2) { // [自动静态注释] 条件判断/分支
        bVar5 = *(ushort *)(param_2 + 4) < 6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        goto LAB__text__00445f84; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      } // [自动静态注释] 作用域/控制流边界
      bVar8 = bVar8 | 7; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    *(byte *)(param_1 + 0x38) = bVar8;
  } // [自动静态注释] 作用域/控制流边界
  bVar5 = true; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
LAB__text__00445f84: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uVar2 = *(undefined4 *)(param_2 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)param_2;
  *(undefined4 *)(param_1 + 0x30) = uVar2;
  *(undefined4 *)(param_1 + 0x34) = param_3;
  return bVar5; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


