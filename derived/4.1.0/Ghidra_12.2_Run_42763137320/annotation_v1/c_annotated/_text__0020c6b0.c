/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0010C6B0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0020c6b0; name: FUN_.text__0020c6b0
 */


void FUN__text__0020c6b0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined8 uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  byte bVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined2 uVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_38 [2]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  local_38[0] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__00603424(local_38); // [自动静态注释] 调用尚未恢复正式名称的函数
  param_1[6] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[7] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined4 *)(param_1 + 8) = local_38[0];
  param_1[2] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[3] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[4] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[5] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *param_1 = 0x40300000000;
  param_1[1] = 0x300000000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined1 *)param_1 = 1;
  uVar1 = param_3[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined8 *)((long)param_1 + 0x14) = *param_3;
  *(undefined8 *)((long)param_1 + 0x1c) = uVar1;
  uVar1 = param_3[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar2 = param_3[3]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar3 = param_3[5]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  bVar5 = 2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined8 *)((long)param_1 + 0x34) = param_3[4];
  *(undefined8 *)((long)param_1 + 0x3c) = uVar3;
  *(undefined8 *)((long)param_1 + 0x24) = uVar1;
  *(undefined8 *)((long)param_1 + 0x2c) = uVar2;
  uVar8 = FUN__text__00633b34(*param_2,2); // [自动静态注释] 调用尚未恢复正式名称的函数
  if ((uVar8 & 1) == 0) { // [自动静态注释] 条件判断/分支
    uVar7 = FUN__text__00631008(*param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
    *(undefined4 *)((long)param_1 + 4) = uVar7;
    uVar6 = FUN__text__00631010(*param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
    *(undefined2 *)(param_1 + 1) = uVar6;
    bVar5 = FUN__text__00634538(*param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
    *(byte *)(param_1 + 2) = bVar5 & 1;
    uVar7 = FUN__text__0063378c(*param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
    *(undefined4 *)((long)param_1 + 0xc) = uVar7;
    if (*(char *)((long)param_1 + 0x15) != '\0') { // [自动静态注释] 条件判断/分支
      *(byte *)((long)param_1 + 0x11) = *(byte *)((long)param_1 + 0x11) | 8;
    } // [自动静态注释] 作用域/控制流边界
    if (*(char *)((long)param_1 + 0x14) != '\0') { // [自动静态注释] 条件判断/分支
      *(byte *)((long)param_1 + 0x11) = *(byte *)((long)param_1 + 0x11) | 4;
    } // [自动静态注释] 作用域/控制流边界
    lVar9 = FUN__text__00321ac0(); // [自动静态注释] 调用尚未恢复正式名称的函数
    uVar4 = *(uint *)((long)param_1 + 4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar8 = (ulong)*(ushort *)(param_1 + 1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (*(char *)(lVar9 + (ulong)uVar4 * 0x150 + uVar8 * 0xc + 0x1ae628) == '\0') { // [自动静态注释] 条件判断/分支
      return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
    if (*(char *)(param_1 + 2) == '\0') { // [自动静态注释] 条件判断/分支
      if (*(int *)(lVar9 + (ulong)uVar4 * 0x150 + uVar8 * 0xc + 0x1ae62c) != 0) { // [自动静态注释] 条件判断/分支
        return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
      } // [自动静态注释] 作用域/控制流边界
      bVar5 = 0x20; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      if (*(int *)(lVar9 + (ulong)uVar4 * 0x150 + uVar8 * 0xc + 0x1ae630) != 0) { // [自动静态注释] 条件判断/分支
        return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
      } // [自动静态注释] 作用域/控制流边界
      bVar5 = 0x40; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  *(byte *)((long)param_1 + 0x11) = *(byte *)((long)param_1 + 0x11) | bVar5;
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


