/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_005C3ED0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006c3ed0; name: FUN_.text__006c3ed0
 */


void FUN__text__006c3ed0(long param_1,undefined8 param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined1 uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  char cVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined2 uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 extraout_b0; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  byte bVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 extraout_var; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined2 extraout_var_00; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ushort uVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar10; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar11; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar12; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar13; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_88; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uStack_84; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_80; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uStack_7c; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_78; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uStack_74; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  uVar10 = NEON_ucvtf((uint)*(ushort *)(param_1 + 0xda)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar11 = NEON_ucvtf((uint)*(ushort *)(param_1 + 0xdc)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar9 = *(ushort *)(param_1 + 0xe0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar4 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar12 = NEON_ucvtf((uint)*(ushort *)(param_1 + 0xde)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar13 = NEON_ucvtf((uint)uVar9); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_80 = uVar10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uStack_7c = uVar11; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_78 = uVar12; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uStack_74 = uVar13; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__006b2e38(); // [自动静态注释] 调用尚未恢复正式名称的函数
  cVar2 = *(char *)(param_1 + 0x109); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_88 = CONCAT22(extraout_var_00,CONCAT11(extraout_var,extraout_b0)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uStack_84 = CONCAT22(uVar4,uVar9); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (cVar2 == '\b') { // [自动静态注释] 条件判断/分支
    FUN__text__006c55b0(param_1,param_2,&local_88,*(undefined8 *)(param_1 + 0x110),&local_80, // [自动静态注释] 调用尚未恢复正式名称的函数
                        *(undefined1 *)(param_1 + 0x5a));
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    if (cVar2 == '\x04') { // [自动静态注释] 条件判断/分支
      FUN__text__006c5130(param_1,param_2,&local_88,*(undefined8 *)(param_1 + 0x110),&local_80, // [自动静态注释] 调用尚未恢复正式名称的函数
                          *(undefined1 *)(param_1 + 0x5a));
      bVar8 = *(byte *)(param_1 + 0x10a); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      goto joined_r0x006c3f90; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
    if (cVar2 == '\x01') { // [自动静态注释] 条件判断/分支
      FUN__text__006c4b10(param_1,param_2,&local_88,*(undefined8 *)(param_1 + 0x110),&local_80, // [自动静态注释] 调用尚未恢复正式名称的函数
                          *(undefined1 *)(param_1 + 0x5a));
      bVar8 = *(byte *)(param_1 + 0x10a); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      goto joined_r0x006c3f90; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  bVar8 = *(byte *)(param_1 + 0x10a); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
joined_r0x006c3f90: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  if ((bVar8 >> 2 & 1) == 0) { // [自动静态注释] 条件判断/分支
    plVar7 = *(long **)(param_1 + 0x118); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if ((((((((*(byte *)((long)plVar7 + 0x12) >> 1 & 1) == 0) && (*(char *)(param_1 + 0xe8) == -1)) // [自动静态注释] 条件判断/分支
           && (*(char *)(param_1 + 0xe9) == -1)) && // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          ((*(char *)(param_1 + 0xea) == -1 && (*(char *)(param_1 + 0xeb) == -1)))) && // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
         ((*(char *)(param_1 + 0xec) == -1 && // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          ((*(char *)(param_1 + 0xed) == -1 && (*(char *)(param_1 + 0xee) == -1)))))) && // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        (*(char *)(param_1 + 0xef) == -1)) && // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
       (((((*(char *)(param_1 + 0xf0) == -1 && (*(char *)(param_1 + 0xf1) == -1)) && // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          (*(char *)(param_1 + 0xf2) == -1)) && // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
         (((*(char *)(param_1 + 0xf3) == -1 && (*(char *)(param_1 + 0xf4) == -1)) && // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          ((*(char *)(param_1 + 0xf5) == -1 && // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
           ((*(char *)(param_1 + 0xf6) == -1 && (*(char *)(param_1 + 0xf7) == -1)))))))) && // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        (*(char *)(param_1 + 0x5a) == -1)))) { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      uVar5 = FUN__text__006b4698(param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
      uVar4 = FUN__text__006b4670(param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
      (**(code **)(*plVar7 + 0x20)) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                (plVar7,param_2,0xff,1,1,param_1 + 0x70,param_1 + 0x50,param_1 + 0x48,uVar5,uVar4); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      uVar10 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      uVar1 = *(undefined1 *)(param_1 + 0x5a); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar5 = FUN__text__006b4698(param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
      uVar4 = FUN__text__006b4670(param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
      (**(code **)(*plVar7 + 0x20)) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                (plVar7,param_2,uVar1,0,1,param_1 + 0x70,param_1 + 0x50,param_1 + 0x48,uVar5,uVar4); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      if ((*(byte *)(param_1 + 0x10a) & 1) == 0) { // [自动静态注释] 条件判断/分支
        lVar6 = FUN__text__006add38(*(undefined8 *)(param_1 + 0x118),param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
        bVar8 = *(byte *)(param_1 + 0xe8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uVar10 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        lVar6 = FUN__text__006add38(*(undefined8 *)(param_1 + 0x118),param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
        *(undefined4 *)(lVar6 + 0x1b0) = *(undefined4 *)(param_1 + 0x50);
        uVar3 = *(undefined4 *)(param_1 + 0x54); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *(undefined4 *)(lVar6 + 0x1a0) = uVar10;
        *(undefined4 *)(lVar6 + 0x1a4) = uVar11;
        *(undefined4 *)(lVar6 + 0x1a8) = uVar12;
        *(undefined4 *)(lVar6 + 0x1ac) = uVar13;
        *(undefined4 *)(lVar6 + 0x1b4) = uVar3;
        lVar6 = FUN__text__006add38(*(undefined8 *)(param_1 + 0x118),param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
        bVar8 = *(byte *)(param_1 + 0xe8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uVar10 = 0xd00; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      uVar11 = NEON_ucvtf((uint)bVar8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined4 *)(lVar6 + 0x1d0) = uVar11;
      uVar11 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xe9)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined4 *)(lVar6 + 0x1d4) = uVar11;
      uVar11 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xea)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined4 *)(lVar6 + 0x1d8) = uVar11;
      uVar11 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xeb)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined4 *)(lVar6 + 0x1dc) = uVar11;
      uVar11 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xec)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined4 *)(lVar6 + 0x1e0) = uVar11;
      uVar11 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xed)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined4 *)(lVar6 + 0x1e4) = uVar11;
      uVar11 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xee)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined4 *)(lVar6 + 0x1e8) = uVar11;
      uVar11 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xef)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined4 *)(lVar6 + 0x1ec) = uVar11;
      uVar11 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xf0)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined4 *)(lVar6 + 0x1f0) = uVar11;
      uVar11 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xf1)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined4 *)(lVar6 + 500) = uVar11;
      uVar11 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xf2)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined4 *)(lVar6 + 0x1f8) = uVar11;
      uVar11 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xf3)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined4 *)(lVar6 + 0x1fc) = uVar11;
      uVar11 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xf4)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined4 *)(lVar6 + 0x200) = uVar11;
      uVar11 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xf5)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined4 *)(lVar6 + 0x204) = uVar11;
      uVar11 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xf6)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined4 *)(lVar6 + 0x208) = uVar11;
      uVar11 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xf7)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined4 *)(lVar6 + 0x20c) = uVar11;
    } // [自动静态注释] 作用域/控制流边界
    lVar6 = FUN__text__006add38(*(undefined8 *)(param_1 + 0x118),param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
    *(undefined4 *)(lVar6 + 0x22c) = uVar10;
    FUN__text__006c5a70(param_1,param_2,&local_88,&local_80); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


