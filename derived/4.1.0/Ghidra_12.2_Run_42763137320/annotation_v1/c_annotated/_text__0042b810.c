/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0032B810
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0042b810; name: FUN_.text__0042b810
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0042b810(long param_1,undefined8 *param_2,undefined8 param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined8 uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_a0; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined2 local_98; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_88; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_80; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_78; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_70; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_68; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_60; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_58; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (*(int *)(param_1 + 0x48) == 0) { // [自动静态注释] 条件判断/分支
    uVar1 = param_2[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined8 *)(param_1 + 0x10) = *param_2;
    *(undefined8 *)(param_1 + 0x18) = uVar1;
    uVar1 = param_2[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar2 = param_2[3]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar3 = param_2[5]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined8 *)(param_1 + 0x30) = param_2[4];
    *(undefined8 *)(param_1 + 0x38) = uVar3;
    *(undefined8 *)(param_1 + 0x20) = uVar1;
    *(undefined8 *)(param_1 + 0x28) = uVar2;
    iVar4 = *(int *)(param_1 + 0x80); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar5 = _DAT_008a45f0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    iVar4 = *(int *)(param_1 + 0x80); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar5 = _DAT_008a45f0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  _DAT_008a45f0 = puVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (iVar4 != 0) { // [自动静态注释] 条件判断/分支
    puVar7 = *(undefined8 **)(param_1 + 0x78); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    do { // [自动静态注释] 循环/迭代
      FUN__text__00433670(param_1 + 8,*puVar7); // [自动静态注释] 调用尚未恢复正式名称的函数
      FUN__text__00435a30(*puVar5,puVar7[2],param_1 + 0x10); // [自动静态注释] 调用尚未恢复正式名称的函数
      lVar6 = puVar7[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      FUN__text__0042bd20(param_1,1,*(undefined4 *)(lVar6 + 4),*(undefined4 *)(lVar6 + 8), // [自动静态注释] 调用尚未恢复正式名称的函数
                          *(undefined1 *)(lVar6 + 0xc));
      puVar7 = puVar7 + 3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (puVar7 != (undefined8 *) // [自动静态注释] 循环/迭代
                       (*(long *)(param_1 + 0x78) + (ulong)*(uint *)(param_1 + 0x80) * 0x18)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  if (*(long *)(param_1 + 0x58) != 0) { // [自动静态注释] 条件判断/分支
    local_68 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uStack_60 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_a0 = *param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_58 = 2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_98 = 0xff00; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_88 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uStack_80 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_78 = 0x100000000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uStack_70 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    FUN__text__0046cff0(DAT_00ae9a90,&local_68,*(long *)(param_1 + 0x58) + 0x50,&local_a0,param_3); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


