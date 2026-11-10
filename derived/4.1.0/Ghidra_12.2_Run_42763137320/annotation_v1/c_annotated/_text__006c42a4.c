/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_005C42A4
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006c42a4; name: FUN_.text__006c42a4
 */


void FUN__text__006c42a4(long param_1,undefined8 param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  byte bVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  bool bVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined2 uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 extraout_b0; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 extraout_var; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined2 extraout_var_00; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ushort uVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar10; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar11; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_80; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uStack_7c; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_78; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_48; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uStack_44; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  uVar9 = *(ushort *)(param_1 + 0xdc); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar5 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_78 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar10 = NEON_ucvtf((uint)*(ushort *)(param_1 + 0xda)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar11 = NEON_ucvtf((uint)uVar9); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(byte *)(param_1 + 0x58) = *(byte *)(param_1 + 0x58) | 0x10;
  uVar3 = NEON_ucvtf((uint)*(ushort *)(param_1 + 0xde)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined4 *)(param_1 + 0x54) = uVar3;
  local_80 = uVar10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uStack_7c = uVar11; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__006b2e38(); // [自动静态注释] 调用尚未恢复正式名称的函数
  local_48 = CONCAT22(extraout_var_00,CONCAT11(extraout_var,extraout_b0)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uStack_44 = CONCAT22(uVar5,uVar9); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(char *)(param_1 + 0x109) == '\x02') { // [自动静态注释] 条件判断/分支
    FUN__text__006c5fa0(param_1,param_2,&local_48,*(undefined8 *)(param_1 + 0x110),&local_80, // [自动静态注释] 调用尚未恢复正式名称的函数
                        *(undefined1 *)(param_1 + 0x5a));
    bVar1 = *(byte *)(param_1 + 0x10a); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    if (*(char *)(param_1 + 0x109) == '\x01') { // [自动静态注释] 条件判断/分支
      FUN__text__006c5b50(param_1,param_2,&local_48,*(undefined8 *)(param_1 + 0x110),&local_80, // [自动静态注释] 调用尚未恢复正式名称的函数
                          *(undefined1 *)(param_1 + 0x5a));
    } // [自动静态注释] 作用域/控制流边界
    bVar1 = *(byte *)(param_1 + 0x10a); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  if ((bVar1 >> 2 & 1) == 0) { // [自动静态注释] 条件判断/分支
    if ((*(byte *)(*(long *)(*(long *)(param_1 + 0x110) + 8) + 0x12) >> 1 & 1) == 0) { // [自动静态注释] 条件判断/分支
      bVar4 = true; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (((((*(char *)(param_1 + 0xe8) == -1) && (*(char *)(param_1 + 0xe9) == -1)) && // [自动静态注释] 条件判断/分支
           (*(char *)(param_1 + 0xea) == -1)) && // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          (((*(char *)(param_1 + 0xeb) == -1 && (*(char *)(param_1 + 0xec) == -1)) && // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
           ((*(char *)(param_1 + 0xed) == -1 && // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
            ((*(char *)(param_1 + 0xee) == -1 && (*(char *)(param_1 + 0xef) == -1)))))))) && // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
         ((*(char *)(param_1 + 0xf0) == -1 && // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          (((((*(char *)(param_1 + 0xf1) == -1 && (*(char *)(param_1 + 0xf2) == -1)) && // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
             (*(char *)(param_1 + 0xf3) == -1)) && // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
            ((*(char *)(param_1 + 0xf4) == -1 && (*(char *)(param_1 + 0xf5) == -1)))) && // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
           ((*(char *)(param_1 + 0xf6) == -1 && (*(char *)(param_1 + 0xf7) == -1)))))))) { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        bVar4 = *(char *)(param_1 + 0x5a) != -1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
    else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      bVar4 = true; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    plVar8 = *(long **)(param_1 + 0x118); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar2 = *(undefined1 *)(param_1 + 0x5a); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar6 = FUN__text__006b4698(param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
    uVar5 = FUN__text__006b4670(param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
    (**(code **)(*plVar8 + 0x20)) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
              (plVar8,param_2,uVar2,bVar4 ^ 1U,0,param_1 + 0x70,param_1 + 0x50,param_1 + 0x48,uVar6, // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
               uVar5); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    if ((bVar4 ^ 1U) == 0) { // [自动静态注释] 条件判断/分支
      lVar7 = FUN__text__006add38(*(undefined8 *)(param_1 + 0x118),param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
      *(undefined4 *)(lVar7 + 0x1b0) = *(undefined4 *)(param_1 + 0x50);
      uVar3 = *(undefined4 *)(param_1 + 0x54); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined4 *)(lVar7 + 0x1a0) = uVar10;
      *(undefined4 *)(lVar7 + 0x1a4) = uVar11;
      *(undefined8 *)(lVar7 + 0x1a8) = 0;
      *(undefined4 *)(lVar7 + 0x1b4) = uVar3;
      lVar7 = FUN__text__006add38(*(undefined8 *)(param_1 + 0x118),param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
      uVar3 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xe8)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined4 *)(lVar7 + 0x1d0) = uVar3;
      uVar3 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xe9)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined4 *)(lVar7 + 0x1d4) = uVar3;
      uVar3 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xea)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined4 *)(lVar7 + 0x1d8) = uVar3;
      uVar3 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xeb)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined4 *)(lVar7 + 0x1dc) = uVar3;
      uVar3 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xec)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined4 *)(lVar7 + 0x1e0) = uVar3;
      uVar3 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xed)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined4 *)(lVar7 + 0x1e4) = uVar3;
      uVar3 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xee)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined4 *)(lVar7 + 0x1e8) = uVar3;
      uVar3 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xef)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined4 *)(lVar7 + 0x1ec) = uVar3;
      uVar3 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xf0)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined4 *)(lVar7 + 0x1f0) = uVar3;
      uVar3 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xf1)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined4 *)(lVar7 + 500) = uVar3;
      uVar3 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xf2)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined4 *)(lVar7 + 0x1f8) = uVar3;
      uVar3 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xf3)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined4 *)(lVar7 + 0x1fc) = uVar3;
      uVar3 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xf4)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined4 *)(lVar7 + 0x200) = uVar3;
      uVar3 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xf5)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined4 *)(lVar7 + 0x204) = uVar3;
      uVar3 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xf6)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined4 *)(lVar7 + 0x208) = uVar3;
      uVar3 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xf7)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined4 *)(lVar7 + 0x20c) = uVar3;
    } // [自动静态注释] 作用域/控制流边界
    bVar1 = *(byte *)(param_1 + 0x10a); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar7 = FUN__text__006add38(*(undefined8 *)(param_1 + 0x118),param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
    *(uint *)(lVar7 + 0x22c) = -(bVar1 & 1) & 0xd00;
    FUN__text__006c5a70(param_1,param_2,&local_48,&local_80); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


