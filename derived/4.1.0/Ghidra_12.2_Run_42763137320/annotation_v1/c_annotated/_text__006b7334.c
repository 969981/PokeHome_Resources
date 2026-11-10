/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_005B7334
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006b7334; name: FUN_.text__006b7334
 */


void FUN__text__006b7334(long param_1,long param_2,undefined8 param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  uint *puVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_78; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_70; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lStack_68; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar6 = *(long *)(param_1 + 0x58); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar7 = (uint)*(byte *)(lVar6 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar1 = (uint *)(param_1 + 0x178); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (((*(byte *)(lVar6 + 8) >> 2 & 1) != 0) && (-1 < *(int *)(param_1 + 0xd4))) { // [自动静态注释] 条件判断/分支
    uVar7 = *(byte *)(lVar6 + 0xf) - 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (uVar7 < 4) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Could not emulate address calculation at 0x006b7398 */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&UNK__text__006b73a4 + (ulong)*(byte *)((ulong)uVar7 + 0x76635f) * 4))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
    uVar7 = *puVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar8 = *(long *)(param_1 + 0xe0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    FUN__text__006c1d00(param_2,param_3,lVar8,uVar7); // [自动静态注释] 调用尚未恢复正式名称的函数
    local_78 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar4 = (undefined8 *)FUN__text__006d65d8(*(undefined8 *)(param_2 + 0xb8),0,0,1,1); // [自动静态注释] 调用尚未恢复正式名称的函数
    local_78 = *puVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar6 = *(long *)(lVar8 + 0x30); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    iVar3 = FUN__text__006b1998(lVar8); // [自动静态注释] 调用尚未恢复正式名称的函数
    FUN__text__006ee15c(param_3,*(undefined4 *)(lVar6 + (long)(int)(iVar3 * (uVar7 & 0xff)) * 4),4, // [自动静态注释] 调用尚未恢复正式名称的函数
                        *(long *)(param_1 + 0x90) + 8,&local_78);
    uVar5 = FUN__text__006d5724(*(undefined8 *)(param_2 + 0xb8),0); // [自动静态注释] 调用尚未恢复正式名称的函数
    FUN__text__006d6610(param_3,param_2,uVar5); // [自动静态注释] 调用尚未恢复正式名称的函数
    plVar2 = (long *)(*(long *)(*(long *)(param_2 + 200) + 0x10) + // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                     (long)*(int *)(*(long *)(param_2 + 200) + 0x30) * 0x10); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    lStack_68 = plVar2[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_70 = *plVar2 + (long)*(int *)(param_1 + 0xbc); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar6 = *(long *)(param_2 + 0xb8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    FUN__text__006ee1d4(param_3,*(undefined4 *)(*(long *)(lVar8 + 0x18) + (long)(int)uVar7 * 4),0, // [自动静态注释] 调用尚未恢复正式名称的函数
                        &local_70,0x230); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    FUN__text__006eca30(param_3,3,1,lVar6 + 0x248,6,0); // [自动静态注释] 调用尚未恢复正式名称的函数
    lVar6 = *(long *)(param_1 + 0x58); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar7 = (uint)*(byte *)(lVar6 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  if (((uVar7 >> 1 & 1) != 0) && (-1 < *(int *)(param_1 + 0xd0))) { // [自动静态注释] 条件判断/分支
    uVar7 = *(byte *)(lVar6 + 0xe) - 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (uVar7 < 4) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Could not emulate address calculation at 0x006b74ec */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&UNK__text__006b74f8 + (ulong)*(byte *)((ulong)uVar7 + 0x766363) * 4))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
    uVar7 = *puVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar8 = *(long *)(param_1 + 0xe0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    FUN__text__006c1d00(param_2,param_3,lVar8,uVar7); // [自动静态注释] 调用尚未恢复正式名称的函数
    local_78 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar4 = (undefined8 *)FUN__text__006d65d8(*(undefined8 *)(param_2 + 0xb8),0,0,1,1); // [自动静态注释] 调用尚未恢复正式名称的函数
    local_78 = *puVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar6 = *(long *)(lVar8 + 0x30); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    iVar3 = FUN__text__006b1998(lVar8); // [自动静态注释] 调用尚未恢复正式名称的函数
    FUN__text__006ee15c(param_3,*(undefined4 *)(lVar6 + (long)(int)(iVar3 * (uVar7 & 0xff)) * 4),4, // [自动静态注释] 调用尚未恢复正式名称的函数
                        *(long *)(param_1 + 0x88) + 8,&local_78);
    uVar5 = FUN__text__006d5724(*(undefined8 *)(param_2 + 0xb8),0); // [自动静态注释] 调用尚未恢复正式名称的函数
    FUN__text__006d6610(param_3,param_2,uVar5); // [自动静态注释] 调用尚未恢复正式名称的函数
    plVar2 = (long *)(*(long *)(*(long *)(param_2 + 200) + 0x10) + // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                     (long)*(int *)(*(long *)(param_2 + 200) + 0x30) * 0x10); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    lStack_68 = plVar2[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_70 = *plVar2 + (long)*(int *)(param_1 + 0xb8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar6 = *(long *)(param_2 + 0xb8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    FUN__text__006ee1d4(param_3,*(undefined4 *)(*(long *)(lVar8 + 0x18) + (long)(int)uVar7 * 4),0, // [自动静态注释] 调用尚未恢复正式名称的函数
                        &local_70,0x230); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    FUN__text__006eca30(param_3,3,1,lVar6 + 0x248,6,0); // [自动静态注释] 调用尚未恢复正式名称的函数
    lVar6 = *(long *)(param_1 + 0x58); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar7 = (uint)*(byte *)(lVar6 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  if (((uVar7 & 1) != 0) && (-1 < *(int *)(param_1 + 0xcc))) { // [自动静态注释] 条件判断/分支
    uVar7 = *(byte *)(lVar6 + 0xd) - 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (uVar7 < 4) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Could not emulate address calculation at 0x006b7640 */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&UNK__text__006b764c + (ulong)*(byte *)((ulong)uVar7 + 0x766367) * 4))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
    uVar7 = *puVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar8 = *(long *)(param_1 + 0xe0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    FUN__text__006c1d00(param_2,param_3,lVar8,uVar7); // [自动静态注释] 调用尚未恢复正式名称的函数
    local_78 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar4 = (undefined8 *)FUN__text__006d65d8(*(undefined8 *)(param_2 + 0xb8),0,0,1,1); // [自动静态注释] 调用尚未恢复正式名称的函数
    local_78 = *puVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar6 = *(long *)(lVar8 + 0x30); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    iVar3 = FUN__text__006b1998(lVar8); // [自动静态注释] 调用尚未恢复正式名称的函数
    FUN__text__006ee15c(param_3,*(undefined4 *)(lVar6 + (long)(int)(iVar3 * (uVar7 & 0xff)) * 4),4, // [自动静态注释] 调用尚未恢复正式名称的函数
                        *(long *)(param_1 + 0x80) + 8,&local_78);
    uVar5 = FUN__text__006d5724(*(undefined8 *)(param_2 + 0xb8),0); // [自动静态注释] 调用尚未恢复正式名称的函数
    FUN__text__006d6610(param_3,param_2,uVar5); // [自动静态注释] 调用尚未恢复正式名称的函数
    plVar2 = (long *)(*(long *)(*(long *)(param_2 + 200) + 0x10) + // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                     (long)*(int *)(*(long *)(param_2 + 200) + 0x30) * 0x10); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    lStack_68 = plVar2[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_70 = *plVar2 + (long)*(int *)(param_1 + 0xb4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar6 = *(long *)(param_2 + 0xb8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    FUN__text__006ee1d4(param_3,*(undefined4 *)(*(long *)(lVar8 + 0x18) + (long)(int)uVar7 * 4),0, // [自动静态注释] 调用尚未恢复正式名称的函数
                        &local_70,0x230); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    FUN__text__006eca30(param_3,3,1,lVar6 + 0x248,6,0); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


